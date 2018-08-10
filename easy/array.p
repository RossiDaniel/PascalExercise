program program2;

var v:array [1..10] of integer;
    num,i :integer;

begin
    writeln('inserisci un numero');
    readln(num);
    for i := 1 to num do
    begin
        v[i] := i;
        writeln(v[i]);
    end;
end.