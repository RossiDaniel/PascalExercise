program delete_k_numbers;
var v: array[1..6] of integer;
    i, j, n, k, x,w: integer;
    begin
        n:= length(v);
        for i:= 1 to n do
        begin
            v[i]:=i;
        end;
        write('inserisci ogni quanto uccidere una persona');
        readln(x);
        j:= 1;
        i:= 1;
        while n>1 do
        begin
            if(i=x)then
            begin
                k:= j+1;
                while k<=n do
                begin
                    v[k-1]:= v[k];
                    k:= k+1;
                end;
                for w:= 1 to n do
                begin
                    write(v[w],' ');
                end;
                writeln('');
                n:= n-1;
                i:= 1;
            end
            else 
            begin
                j:= j+1;
                i:= i+1;
                if(j>n) then
                begin
                    j:=1;
                end;
            end;
        end;
        writeln('si salva la persona numero: ',v[1] );
    end.