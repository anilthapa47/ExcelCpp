all: mqtt

mqtt: settingMqtt.o 
	gcc settingMqtt.c -o $@ -lmosquitto

settingMqtt.o: settingMqtt.c
	gcc -c $^ -o $@

clean:
	rm *.o mqtt