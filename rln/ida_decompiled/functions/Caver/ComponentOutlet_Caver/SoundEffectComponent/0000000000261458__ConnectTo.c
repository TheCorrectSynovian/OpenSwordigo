/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261458
 * Mangled: _ZN5Caver15ComponentOutletINS_20SoundEffectComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::SoundEffectComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000261464 string=0x0000000000261468 "`\n@"
 *   insn=0x0000000000261474 string=0x0000000000261478 "T"
 *   insn=0x000000000026147C string=0x0000000000261480 ""
 *   insn=0x0000000000261484 string=0x0000000000261488 "t\n"
 *   insn=0x000000000026148C string=0x0000000000261490 "@"
 *   insn=0x0000000000261490 string=0x0000000000261494 ""
 *   insn=0x0000000000261494 string=0x0000000000261498 ""
 *   insn=0x000000000026149C string=0x00000000002614A0 ""
 *   insn=0x00000000002614A0 string=0x00000000002614A4 ""
 *   insn=0x00000000002614AC string=0x00000000002614B0 "h\n"
 *   insn=0x00000000002614C4 string=0x00000000002614C8 "@"
 *   insn=0x00000000002614C8 string=0x00000000002614CC ""
 *   insn=0x00000000002614CC string=0x00000000002614D0 ""
 *   insn=0x00000000002614D4 string=0x00000000002614D8 ""
 *   insn=0x00000000002614E4 string=0x00000000002614E8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::SoundEffectComponent>::ConnectTo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  result = *(_DWORD **)(a1 + 16);
  if ( result != a2 )
  {
    if ( a2 )
    {
      ++a2[2];
      *(_QWORD *)(a1 + 16) = a2;
      if ( result )
      {
        v5 = result[2] - 1;
        result[2] = v5;
        if ( !v5 )
          result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
      *(_DWORD *)(a1 + 8) = a2[8];
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
      if ( result )
      {
        v6 = result[2] - 1;
        result[2] = v6;
        if ( !v6 )
          return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
    }
  }
  return result;
}

