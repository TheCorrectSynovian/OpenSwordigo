/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D3FC
 * Mangled: _ZN5Caver15ComponentOutletINS_18AnimationComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::AnimationComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000021D408 string=0x000000000021D40C "`\n@"
 *   insn=0x000000000021D418 string=0x000000000021D41C "T"
 *   insn=0x000000000021D420 string=0x000000000021D424 ""
 *   insn=0x000000000021D428 string=0x000000000021D42C "t\n"
 *   insn=0x000000000021D430 string=0x000000000021D434 "@"
 *   insn=0x000000000021D434 string=0x000000000021D438 ""
 *   insn=0x000000000021D438 string=0x000000000021D43C ""
 *   insn=0x000000000021D440 string=0x000000000021D444 ""
 *   insn=0x000000000021D444 string=0x000000000021D448 ""
 *   insn=0x000000000021D450 string=0x000000000021D454 "h\n"
 *   insn=0x000000000021D468 string=0x000000000021D46C "@"
 *   insn=0x000000000021D46C string=0x000000000021D470 ""
 *   insn=0x000000000021D470 string=0x000000000021D474 ""
 *   insn=0x000000000021D478 string=0x000000000021D47C ""
 *   insn=0x000000000021D488 string=0x000000000021D48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::AnimationComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

