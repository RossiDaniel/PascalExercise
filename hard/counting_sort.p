program counting_sort;
var v, w: array[1..30]of integer;
aux: array[1..90]of integer;
    i: integer;
begin   
    for i:= 1 to length(v) do
    begin
        v[i]:= random(90);
        write(v[i],' ');   
    end;
    writeln('');
    for i:= 1 to length(aux) do
    begin
        aux[i]:=0;
    end;

    for i:= 1 to length(v) do 
    begin
        aux[v[i]]:= aux[v[i]]+1;
    end;
    for i:=2 to length(aux) do
    begin
        aux[i]:= aux[i]+aux[i-1];
    end;
    for i:= length(v) downto 1 do
    begin
        w[aux[v[i]]]:= v[i];
        aux[v[i]]:= aux[v[i]]-1;
    end;
    for i:= 1 to length(v) do
    begin
        write(w[i],' ');   
    end;
end.