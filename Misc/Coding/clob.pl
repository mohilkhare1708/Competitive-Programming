use LWP::Simple qw(get);
my $url = "https://www.google.com";
my $html = get $url;
print $html;