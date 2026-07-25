/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477A74
 * Mangled: _ZN5boost10shared_ptrIN5Caver10CaverShellEED2Ev
 * Demangled: boost::shared_ptr<Caver::CaverShell>::~shared_ptr()
 *
 * Callers: 1
 *   0x000000000020C014  sub_20C014
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000477A84 string=0x0000000000477A88 "h"
 *   insn=0x0000000000477A88 string=0x0000000000477A8C ""
 *   insn=0x0000000000477A8C string=0x0000000000477A90 "h"
 *   insn=0x0000000000477A90 string=0x0000000000477A94 "!"
 *   insn=0x0000000000477A94 string=0x0000000000477A98 "h"
 *   insn=0x0000000000477A9C string=0x0000000000477AA0 "\t@"
 *   insn=0x0000000000477AA4 string=0x0000000000477AA8 "h\n@"
 *   insn=0x0000000000477AA8 string=0x0000000000477AAC ""
 *   insn=0x0000000000477AAC string=0x0000000000477AB0 "h\n"
 *   insn=0x0000000000477AB4 string=0x0000000000477AC4 "h"
 *   insn=0x0000000000477AD4 string=0x0000000000477AD8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::CaverShell>::~shared_ptr(__int64 result)
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

