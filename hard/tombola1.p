program tombola1;
var vett1, vett2:array [1..30]of integer;
i, j, count,n_ele:integer;
s:boolean;
begin
writeln('quanti valori vuoi inserire?');
read (n_ele);
for i:=1 to n_ele do
begin
read (vett1[i]);
end;
for j:=1 to 15 do
begin
    vett2[j]:=  RANDOM(90);
end;
i:=1;
count:=0;
while (i<=n_ele) do
begin
    j:=1;
    s:=false;
    while (j<=15) and (s=false)do
    begin
        if (vett1[i]=vett2[j]) then
        begin
            WRITE(count);
            count:=count+1;
            s:=true;
        end;
        j:=j+1;
    end;
    i:=i+1;
end;
write ('il risultato e'':',count);

end.