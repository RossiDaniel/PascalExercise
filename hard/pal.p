program pal;

var 
str: string[30]; 
s: boolean;
i,q: integer;

begin
    write('inserisci la stringa: '); readln(str);
    s:= true;
    i:= 1;
    q:= length(str) div 2;

    while(i<=q)and(s=true) do
    begin
        if(str[i] <> str[length(str)-i+1]) then
        begin
            s:= false;
        end;
        i:= i+1;
    end;
    if(s= true) then
    begin
        write('la stringa è palindroma');
    end
    else
    begin
        write('la stringa non è palindroma');
    end;
end.