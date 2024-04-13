<?php
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $errors = '';
    $myemail = 'ddjdurjoy3@gmail.com';

    if (empty($_POST['fullname']) || empty($_POST['email']) || empty($_POST['message'])) {
        $errors .= "\nError: All fields are required";
    }

    $name = $_POST['fullname'];
    $email_address = $_POST['email'];
    $message = $_POST['message'];

    if (!filter_var($email_address, FILTER_VALIDATE_EMAIL)) {
        $errors .= "\nError: Invalid email address";
    }

    if (empty($errors)) {
        $to = $myemail;
        $email_subject = "Contact form submission: $name";
        $email_body = "You have received a new message.\n\nName: $name\nEmail: $email_address\nMessage:\n$message";
        $headers = "From: $myemail\n";
        $headers .= "Reply-To: $email_address";

        mail($to, $email_subject, $email_body, $headers);

        header('Location: contact-form-thank-you.html');
        exit;
    }
}
?>