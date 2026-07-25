/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477BAC
 * Mangled: _ZN5boost10shared_ptrIN5Caver23StoreController_AndroidEED2Ev
 * Demangled: boost::shared_ptr<Caver::StoreController_Android>::~shared_ptr()
 *
 * Callers: 1
 *   0x000000000020C014  sub_20C014
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000477BBC string=0x0000000000477BC0 "h"
 *   insn=0x0000000000477BC0 string=0x0000000000477BC4 ""
 *   insn=0x0000000000477BC4 string=0x0000000000477BC8 "h"
 *   insn=0x0000000000477BC8 string=0x0000000000477BCC "!"
 *   insn=0x0000000000477BCC string=0x0000000000477BD0 "h"
 *   insn=0x0000000000477BD4 string=0x0000000000477BD8 "\t@"
 *   insn=0x0000000000477BDC string=0x0000000000477BE0 "h\n@"
 *   insn=0x0000000000477BE0 string=0x0000000000477BE4 ""
 *   insn=0x0000000000477BE4 string=0x0000000000477BE8 "h\n"
 *   insn=0x0000000000477BEC string=0x0000000000477BFC "h"
 *   insn=0x0000000000477C0C string=0x0000000000477C10 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::StoreController_Android>::~shared_ptr(__int64 result)
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

