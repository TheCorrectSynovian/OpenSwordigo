/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477ADC
 * Mangled: _ZN5boost10shared_ptrIN5Caver24OnlineController_AndroidEED2Ev
 * Demangled: boost::shared_ptr<Caver::OnlineController_Android>::~shared_ptr()
 *
 * Callers: 1
 *   0x000000000020C014  sub_20C014
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000477AEC string=0x0000000000477AF0 "h"
 *   insn=0x0000000000477AF0 string=0x0000000000477AF4 ""
 *   insn=0x0000000000477AF4 string=0x0000000000477AF8 "h"
 *   insn=0x0000000000477AF8 string=0x0000000000477AFC "!"
 *   insn=0x0000000000477AFC string=0x0000000000477B00 "h"
 *   insn=0x0000000000477B04 string=0x0000000000477B08 "\t@"
 *   insn=0x0000000000477B0C string=0x0000000000477B10 "h\n@"
 *   insn=0x0000000000477B10 string=0x0000000000477B14 ""
 *   insn=0x0000000000477B14 string=0x0000000000477B18 "h\n"
 *   insn=0x0000000000477B1C string=0x0000000000477B2C "h"
 *   insn=0x0000000000477B3C string=0x0000000000477B40 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::OnlineController_Android>::~shared_ptr(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(result + 8);
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
  return result;
}

