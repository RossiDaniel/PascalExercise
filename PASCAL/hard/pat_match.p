program pat_match;
var
v1: string[30];
v2: string[30];
n,m,i,j,count,ind,max: integer;
s: boolean;

begin
//programma che cerca il match più lungo di v2 in v1

ind := -1;
max := -1;
i:= 1;

write('inserire prima stringa: ');readln(v1);
write('inserire seconda stringa: ');readln(v2);

n:= length(v1);
m:= length(v2);

    while (i < (n - m + 1)) do
    begin
        s := true;
        count := 0;
        j:=1;
        while (s = true) and (j <= m) do
        begin
            if(v1[i+j-1] = v2[j]) then 
            begin
                count := count +1;
            end
            else
            begin
                s := false;
            end;
            j:= j+1;
        end;
        
        if(max < count) then 
        begin
            max := count;
            ind := i;
        end;
        i:= i+1;
    end;
    write('match di lunghezza: ');
    write(max);
    write(', a partire dalla posizione: ');
    write(ind);
end.