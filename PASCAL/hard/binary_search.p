program binary_trovatoearch;

var
i,j,m,x:integer;
trovato: boolean;
v: array[1..30] of integer;

begin
write('inserire il valore da cercare: ');readln(x);

//inserire in v i numeri ordinati

i:=1;
j:=length(v);
trovato:= false;
while (i<j) and (trovato = false) do
begin
    m:= (i+j) div 2;
    if(v[m] = x) then 
    begin
        trovato:=true;
    end
    else
    begin
        if(v[m] > x) then 
        begin
            j:= m-1;
        end
        else
        begin
            i:= m+1;
        end;    
    end;

end;

write(trovato);

end.
