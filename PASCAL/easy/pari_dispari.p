program program1;

var num:integer;

begin 
    writeln('inserisci un numero');
    readln(num);
    if(num mod 2 = 0) then 
        begin
            writeln('pari');
        end
    else
        begin
            writeln('dispari')
        end;
end.