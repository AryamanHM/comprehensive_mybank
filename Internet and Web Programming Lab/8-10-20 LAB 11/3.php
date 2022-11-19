

<?php
$to_email = "aryaman.mishra73@gmail.com";
$subject = "Daisy";
$body = "How do you do?my dear friend!";
$headers = "From: aryaman.mishra73@gmail.com";

if (mail($to_email, $subject, $body, $headers)) {
    echo "Email successfully sent to $to_email...";
} else {
    echo "Email sending failed...";
}