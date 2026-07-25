/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD330
 * Mangled: _ZN5Caver14CharacterState13AnyItemOfTypeENS_8ItemTypeE
 * Demangled: Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *
 * Callers: 1
 *   0x00000000001FA110  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *
 * Callees: 1
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 13
 *   insn=0x00000000003AD340 string=0x00000000003AD344 " "
 *   insn=0x00000000003AD344 string=0x00000000003AD348 "5a"
 *   insn=0x00000000003AD358 string=0x00000000003AD35C ""
 *   insn=0x00000000003AD35C string=0x00000000003AD360 "\t"
 *   insn=0x00000000003AD360 string=0x00000000003AD364 "?"
 *   insn=0x00000000003AD368 string=0x00000000003AD380 "h"
 *   insn=0x00000000003AD370 string=0x00000000003AD374 "A"
 *   insn=0x00000000003AD378 string=0x00000000003AD37C ""
 *   insn=0x00000000003AD380 string=0x00000000003AD384 ""
 *   insn=0x00000000003AD384 string=0x00000000003AD388 "h"
 *   insn=0x00000000003AD38C string=0x00000000003AD390 "\t"
 *   insn=0x00000000003AD390 string=0x00000000003AD394 ")"
 *   insn=0x00000000003AD394 string=0x00000000003AD398 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharacterState::AnyItemOfType@<X0>(__int64 a1@<X0>, int a2@<W1>, _QWORD *a3@<X8>)
{
  __int64 result; // x0
  __int64 v5; // x21
  _DWORD *v8; // x8
  __int64 v9; // x8

  result = *(_QWORD *)(a1 + 40);
  v5 = a1 + 24;
  if ( a1 + 24 == result )
  {
LABEL_4:
    *a3 = 0;
    a3[1] = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)(result + 40);
      if ( *v8 == a2 )
        break;
      result = sub_54C6A0(result);
      if ( v5 == result )
        goto LABEL_4;
    }
    *a3 = v8;
    v9 = *(_QWORD *)(result + 48);
    a3[1] = v9;
    if ( v9 )
      ++*(_QWORD *)(v9 + 8);
  }
  return result;
}

