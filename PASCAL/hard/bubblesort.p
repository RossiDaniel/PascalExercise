program bubblesort;
var i, j, aux: integer;
    v: array [1..10] of integer;
    s: boolean;
    begin
    for i:= 1 to length(v) do
    begin
        v[i]:= random(90);
        write(v[i],' ');   
    end;
    writeln('');
    s:=true;
    i:= 1;
    while(s=true) and (i<=length(v)) do
    begin
        s:= false;
        j:= length(v);
        while j>i do
        begin
            if v[j]<v[j-1] then
            begin
                aux:= v[j];
                v[j]:= v[j-1];
                v[j-1]:=aux;
                s:=true;
            end;
            j:=j-1;
        end;   
        i:=i+1;
    end;
    for i:= 1 to length(v) do
    begin
        write(v[i],' ');   
    end;      
    end.