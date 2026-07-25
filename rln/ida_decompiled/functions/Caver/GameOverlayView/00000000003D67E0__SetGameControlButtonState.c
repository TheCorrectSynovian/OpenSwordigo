/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D67E0
 * Mangled: _ZN5Caver15GameOverlayView25SetGameControlButtonStateENS_17GameControlButtonEb
 * Demangled: Caver::GameOverlayView::SetGameControlButtonState(Caver::GameControlButton,bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000003D67E4 string=0x00000000003D67E8 "("
 *   insn=0x00000000003D67EC string=0x00000000003D67F4 "(y"
 *   insn=0x00000000003D67F4 string=0x00000000003D67F8 ""
 *   insn=0x00000000003D6800 string=0x00000000003D6804 "\n"
 *   insn=0x00000000003D6808 string=0x00000000003D680C ""
 *   insn=0x00000000003D682C string=0x00000000003D6830 "_"
 *   insn=0x00000000003D6830 string=0x00000000003D6834 "("
 *   insn=0x00000000003D6834 string=0x00000000003D6838 ")x"
 *   insn=0x00000000003D6838 string=0x00000000003D683C ""
 *   insn=0x00000000003D6840 string=0x00000000003D6844 " "
 *   insn=0x00000000003D6844 string=0x00000000003D6848 "A"
 *   insn=0x00000000003D6848 string=0x00000000003D6850 ""
 *   insn=0x00000000003D6854 string=0x00000000003D6858 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::SetGameControlButtonState(__int64 result, int a2, char a3)
{
  int v3; // w1
  unsigned int v4; // w8

  switch ( a2 )
  {
    case 1:
      result = *(_QWORD *)(result + 320);
      goto LABEL_8;
    case 2:
      result = *(_QWORD *)(result + 336);
      goto LABEL_8;
    case 3:
      result = *(_QWORD *)(result + 352);
      goto LABEL_8;
    case 4:
      result = *(_QWORD *)(result + 368);
      goto LABEL_8;
    case 5:
      result = *(_QWORD *)(result + 384);
      goto LABEL_8;
    case 6:
      result = *(_QWORD *)(result + 400);
LABEL_8:
      v3 = *(_DWORD *)(result + 288);
      v4 = v3 | 1;
      if ( (a3 & 1) == 0 )
        v4 = v3 & 0xFFFFFFFE;
      *(_DWORD *)(result + 288) = v4;
      if ( v4 != v3 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 304LL))(result);
      break;
    default:
      return result;
  }
  return result;
}

