/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A75D4
 * Mangled: _ZN5Caver14ProfileManager11AddDelegateEPNS_23IProfileManagerDelegateE
 * Demangled: Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callers: 1
 *   0x0000000000200F50  Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 14
 *   insn=0x00000000003A75E8 string=0x00000000003A75EC "i"
 *   insn=0x00000000003A75F0 string=0x00000000003A75F4 "tB"
 *   insn=0x00000000003A760C string=0x00000000003A7610 "I"
 *   insn=0x00000000003A7610 string=0x00000000003A7614 ")"
 *   insn=0x00000000003A7614 string=0x00000000003A7618 ")"
 *   insn=0x00000000003A7620 string=0x00000000003A7624 "h"
 *   insn=0x00000000003A7624 string=0x00000000003A7628 ""
 *   insn=0x00000000003A7624 string=0x00000000003A7630 "h"
 *   insn=0x00000000003A7628 string=0x00000000003A7644 ""
 *   insn=0x00000000003A763C string=0x00000000003A7640 "0"
 *   insn=0x00000000003A7674 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A7690 string=0x00000000003A7694 "h"
 *   insn=0x00000000003A7694 string=0x00000000003A7698 ""
 *   insn=0x00000000003A7698 string=0x00000000003A769C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileManager::AddDelegate(__int64 result, unsigned __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x9
  __int64 v5; // x20
  __int64 v6; // x22
  unsigned __int64 v7; // x8
  __int64 *v8; // x9
  _BOOL4 v9; // w23
  __int64 v10; // x0

  v2 = result;
  v3 = *(_QWORD *)(result + 24);
  v5 = result + 16;
  if ( v3 )
  {
    do
    {
      v6 = v3;
      v7 = *(_QWORD *)(v3 + 32);
      v8 = (__int64 *)(v3 + 24);
      if ( v7 > a2 )
        v8 = (__int64 *)(v6 + 16);
      v3 = *v8;
    }
    while ( v3 );
    result = v6;
    if ( v7 <= a2 )
    {
LABEL_10:
      if ( *(_QWORD *)(result + 32) >= a2 )
        return result;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = result + 16;
  }
  if ( v6 != *(_QWORD *)(v2 + 32) )
  {
    result = sub_54C700(v6);
    goto LABEL_10;
  }
LABEL_11:
  if ( v6 )
  {
    v9 = v5 == v6 || *(_QWORD *)(v6 + 32) > a2;
    v10 = operator new(0x28u);
    *(_QWORD *)(v10 + 32) = a2;
    result = sub_54C8A0(v9, v10, v6, v5);
    ++*(_QWORD *)(v2 + 48);
  }
  return result;
}

