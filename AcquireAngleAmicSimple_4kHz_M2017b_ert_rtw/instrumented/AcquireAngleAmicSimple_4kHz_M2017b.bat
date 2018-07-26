call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Auxiliary\Build\VCVARSALL.BAT " amd64

cd .
nmake -f AcquireAngleAmicSimple_4kHz_M2017b.mk  GENERATE_ASAP2=0 OPTS="-DRT -DUSE_RTMODEL -DERT -DTID01EQ=1"
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make