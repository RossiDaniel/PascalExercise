program username;
     uses crt;
     var name: String[50];
    
begin
    clrscr;
    writeln('Inserisci il nome');
    readln(name);
    clrscr;
    writeln('Benvenuto, ', name);
 end.