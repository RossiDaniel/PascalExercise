program selection_sort;
var i, j, min, aux, n:integer;
v:array [1..20]of integer;
begin
    n:=20;
    for i:=1 to n do 
    begin
        v[i]:= RANDOM(90);
    end; 
    aux:=0;
    for i:=1 to n-1 do 
    begin
        min:=i;
        for j:=i to n do
        begin
            if v[min]>v[j]then 
            begin
                min:=j;
            end;
        end;
        aux:=v[min];
        v[min]:=v[i];
        v[i]:=aux;
    end;
    for i:=1 to n do 
    begin
       writeln (v[i]);
    end; 
end.