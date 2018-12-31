program tombola;
var
v1:array[1..10] of integer;
v2:array[1..10] of integer;
n_ele,i,j,count: integer;
s: boolean;

begin

writeln('inserisci quanti numeri vuoi inserire');
read(n_ele);
for j := 1 to n_ele do
begin
read(v1[j]);
end;

for i := 1 to 10 do
begin
    v2[i] := RANDOM(90);
end;
count:=0;
for i:= 1 to n_ele do 
begin
    s := false;
    j:= 1;
    while (j < 10) and (s = false) do
    begin
        write(v1[i]);
        write(' ');
        writeln(v2[j]);
        if(v1[i] = v2[j]) then 
        begin
            count := count +1;
            s := true;
        end;
        j:= j + 1;
    end;
end;
writeln(count);
end.