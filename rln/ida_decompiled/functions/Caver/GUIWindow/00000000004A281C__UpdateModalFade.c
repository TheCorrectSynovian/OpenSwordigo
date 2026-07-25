/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A281C
 * Mangled: _ZN5Caver9GUIWindow15UpdateModalFadeEbf
 * Demangled: Caver::GUIWindow::UpdateModalFade(bool,float)
 *
 * Callers: 1
 *   0x00000000001FD690  Caver::GUIWindow::UpdateModalFade(bool,float)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004A2820 string=0x00000000004A2824 ""
 *   insn=0x00000000004A2820 string=0x00000000004A283C "A"
 *   insn=0x00000000004A2824 string=0x0000000000583734 "o"
 *   insn=0x00000000004A282C string=0x00000000004A2830 "  ""
 *   insn=0x00000000004A2830 string=0x00000000004A2834 ""
 *   insn=0x00000000004A2834 string=0x00000000004A2874 ""
 *   insn=0x00000000004A2840 string=0x00000000004A2844 ""
 *   insn=0x00000000004A2850 string=0x00000000004A2854 """
 *   insn=0x00000000004A2854 string=0x00000000004A2858 "@ "
 *   insn=0x00000000004A2858 string=0x00000000004A285C "`( "
 *   insn=0x00000000004A2864 string=0x00000000004A2868 "m"
 *   insn=0x00000000004A2884 string=0x00000000004A2888 "H"
 *   insn=0x00000000004A28A0 string=0x00000000004A28A4 " ( "
 *   insn=0x00000000004A28A4 string=0x00000000004A28A8 "  "
 *   insn=0x00000000004A28AC string=0x00000000004A28B0 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::UpdateModalFade(__int64 this, char a2, float a3)
{
  __int64 v3; // x8
  float v4; // s1
  float v5; // s0
  int v6; // s0
  float v7; // s0

  v3 = *(_QWORD *)(this + 464);
  if ( !v3 )
  {
LABEL_4:
    if ( (a2 & 1) != 0 )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( *(float *)(this + 508) > 0.001 )
  {
    LODWORD(v3) = 0;
    goto LABEL_4;
  }
  LODWORD(v3) = *(_BYTE *)(this + 504) == 0;
  if ( (a2 & 1) != 0 )
  {
LABEL_5:
    if ( (_DWORD)v3 )
    {
      v4 = *(float *)(this + 476);
      v5 = *(float *)(this + 472) + (float)((float)(v4 / 0.2) * a3);
      *(float *)(this + 472) = v5;
      if ( v5 > v4 )
        *(float *)(this + 472) = v4;
    }
    else
    {
      v7 = *(float *)(this + 472) + (float)(a3 * -2.5);
      *(float *)(this + 472) = v7;
      if ( v7 < 0.0 )
        *(_DWORD *)(this + 472) = 0;
    }
    return this;
  }
LABEL_9:
  v6 = 0;
  if ( (_DWORD)v3 )
    v6 = *(_DWORD *)(this + 476);
  *(_DWORD *)(this + 472) = v6;
  return this;
}

