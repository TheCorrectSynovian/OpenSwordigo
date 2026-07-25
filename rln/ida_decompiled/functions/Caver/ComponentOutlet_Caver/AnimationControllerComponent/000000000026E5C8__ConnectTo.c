/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E5C8
 * Mangled: _ZN5Caver15ComponentOutletINS_28AnimationControllerComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::AnimationControllerComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000026E5D4 string=0x000000000026E5D8 "`\n@"
 *   insn=0x000000000026E5E4 string=0x000000000026E5E8 "T"
 *   insn=0x000000000026E5EC string=0x000000000026E5F0 ""
 *   insn=0x000000000026E5F4 string=0x000000000026E5F8 "t\n"
 *   insn=0x000000000026E5FC string=0x000000000026E600 "@"
 *   insn=0x000000000026E600 string=0x000000000026E604 ""
 *   insn=0x000000000026E604 string=0x000000000026E608 ""
 *   insn=0x000000000026E60C string=0x000000000026E610 ""
 *   insn=0x000000000026E610 string=0x000000000026E614 ""
 *   insn=0x000000000026E61C string=0x000000000026E620 "h\n"
 *   insn=0x000000000026E634 string=0x000000000026E638 "@"
 *   insn=0x000000000026E638 string=0x000000000026E63C ""
 *   insn=0x000000000026E63C string=0x000000000026E640 ""
 *   insn=0x000000000026E644 string=0x000000000026E648 ""
 *   insn=0x000000000026E654 string=0x000000000026E658 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::AnimationControllerComponent>::ConnectTo(__int64 a1, _DWORD *a2)
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

