program duePerUno;
var
   pacchi: integer;
begin
    writeln('inserire il numero di pacchi di pasta');
    read(pacchi);
    pacchi := pacchi - (pacchi div 3);
    write(pacchi * 1.20);
end.