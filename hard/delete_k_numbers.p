program delete_k_numbers;
var v: array[1..10] of integer;
    i, k, j, n, w, l: integer;
    begin
    n:= length(v);
        for i:= 1 to n do
        begin 
            v[i]:= i;
        end;
        write('inserisci il numero della conta');
        readln(k);
        i:=1;
        j:=1;
        while n>1 do
        begin
            if i=k then
            begin
                for w:= j+1 to n do
                begin
                    v[w-1]:= v[w];
                end;
            i:= 1;
            n:= n-1;
            if j>n then
            begin
                j:=1;
            end;
            for l:= 1 to n do
            begin 
                write(v[l],' ');
            end;
            writeln(' ');

            end
            else
            begin
                i:= i+1;
                j:= j+1;
                if j>n then
                begin
                    j:=1;
                end;
            end;
        end;
    writeln('sopravvive il numero: ',v[n]);
    end.