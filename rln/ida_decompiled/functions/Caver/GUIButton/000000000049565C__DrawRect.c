/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049565C
 * Mangled: _ZN5Caver9GUIButton8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FBC10  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002023B0  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 126
 *   insn=0x0000000000495678 string=0x000000000049567C "Y"
 *   insn=0x000000000049567C string=0x0000000000495680 "("
 *   insn=0x0000000000495690 string=0x0000000000495694 "h"
 *   insn=0x0000000000495698 string=0x000000000049569C "("
 *   insn=0x000000000049569C string=0x00000000004956A0 "h"
 *   insn=0x000000000049569C string=0x0000000000495A40 "("
 *   insn=0x00000000004956AC string=0x00000000004956B0 ""
 *   insn=0x00000000004956B8 string=0x00000000004956BC "eB"
 *   insn=0x00000000004956D4 string=0x00000000004956D8 "2"
 *   insn=0x00000000004956D8 string=0x00000000004956DC "w"
 *   insn=0x00000000004956DC string=0x00000000004956E0 "x"
 *   insn=0x00000000004956E0 string=0x00000000004956E4 "h"A"
 *   insn=0x00000000004956E4 string=0x00000000004956E8 "z"
 *   insn=0x00000000004956E8 string=0x00000000004956EC "H"
 *   insn=0x00000000004956EC string=0x0000000000495734 "`"
 *   insn=0x00000000004956FC string=0x0000000000495700 "C"
 *   insn=0x0000000000495700 string=0x0000000000495704 "B!"
 *   insn=0x0000000000495704 string=0x0000000000495708 "\t"
 *   insn=0x0000000000495708 string=0x000000000049570C "a!"
 *   insn=0x0000000000495710 string=0x0000000000495714 "K"
 *   insn=0x0000000000495714 string=0x0000000000495718 "?"
 *   insn=0x0000000000495718 string=0x000000000049571C ","
 *   insn=0x000000000049571C string=0x0000000000495720 "7"
 *   insn=0x0000000000495724 string=0x0000000000495728 "x"
 *   insn=0x0000000000495734 string=0x0000000000495738 "{"
 *   insn=0x000000000049573C string=0x000000000049574C "h"
 *   insn=0x0000000000495740 string=0x0000000000495744 ""
 *   insn=0x0000000000495744 string=0x0000000000495748 "h"A"
 *   insn=0x000000000049574C string=0x0000000000495750 "`"
 *   insn=0x000000000049574C string=0x0000000000495778 "`"
 *   insn=0x0000000000495750 string=0x0000000000495754 " "
 *   insn=0x0000000000495768 string=0x000000000049576C "Y"
 *   insn=0x000000000049576C string=0x0000000000495770 "`"
 *   insn=0x000000000049576C string=0x00000000001F64D0 "0'"
 *   insn=0x0000000000495770 string=0x0000000000495774 "\n"
 *   insn=0x0000000000495778 string=0x000000000049577C "@"
 *   insn=0x000000000049577C string=0x00000000004957A4 "a"
 *   insn=0x0000000000495790 string=0x0000000000495794 "O"
 *   insn=0x0000000000495794 string=0x0000000000495798 "`"
 *   insn=0x00000000004957A4 string=0x00000000004957A8 "c"
 *   insn=0x00000000004957AC string=0x00000000004957B0 "h"
 *   insn=0x00000000004957B0 string=0x00000000004957B4 "! "
 *   insn=0x00000000004957B4 string=0x00000000004957B8 "@ "
 *   insn=0x00000000004957B8 string=0x00000000004957BC "b"
 *   insn=0x00000000004957BC string=0x00000000004957C0 "a(!"
 *   insn=0x00000000004957C0 string=0x00000000004957C4 "c"
 *   insn=0x00000000004957C8 string=0x00000000004957CC "!(""
 *   insn=0x00000000004957D0 string=0x00000000004957D4 "h"
 *   insn=0x00000000004957DC string=0x00000000004957E0 "h"
 *   insn=0x00000000004957E0 string=0x00000000004957E4 "!@&"
 *   insn=0x00000000004957F4 string=0x00000000004957F8 "ab"
 *   insn=0x0000000000495820 string=0x0000000000495824 "h"
 *   insn=0x0000000000495824 string=0x0000000000495828 "h"
 *   insn=0x0000000000495828 string=0x000000000049582C "h"
 *   insn=0x0000000000495828 string=0x0000000000495854 "h"
 *   insn=0x000000000049582C string=0x0000000000495830 "("
 *   insn=0x0000000000495830 string=0x0000000000495834 "\n"
 *   insn=0x0000000000495834 string=0x0000000000495838 "I"
 *   insn=0x0000000000495838 string=0x000000000049583C "W"
 *   insn=0x000000000049583C string=0x0000000000495840 "7"
 *   insn=0x0000000000495840 string=0x0000000000495844 "w"
 *   insn=0x0000000000495848 string=0x000000000049584C "`"
 *   insn=0x000000000049584C string=0x0000000000495850 "\n"
 *   insn=0x0000000000495854 string=0x0000000000495858 "H"
 *   insn=0x0000000000495858 string=0x000000000049585C "\n"
 *   insn=0x0000000000495858 string=0x0000000000495880 "w"
 *   insn=0x000000000049585C string=0x0000000000495860 "I"
 *   insn=0x0000000000495860 string=0x0000000000495864 "W"
 *   insn=0x0000000000495864 string=0x0000000000495868 "7"
 *   insn=0x0000000000495868 string=0x000000000049586C "w"
 *   insn=0x0000000000495870 string=0x0000000000495874 "`"
 *   insn=0x000000000049587C string=0x00000000001F8B80 "0'"
 *   insn=0x0000000000495890 string=0x0000000000495894 "h"
 *   insn=0x000000000049589C string=0x00000000004958A0 "h"
 *   insn=0x00000000004958A4 string=0x00000000004958A8 "A"
 *   insn=0x00000000004958AC string=0x00000000004958B0 "c"
 *   insn=0x00000000004958B0 string=0x00000000004958B4 "! "
 *   insn=0x00000000004958B4 string=0x00000000004958B8 "B "
 *   insn=0x00000000004958B8 string=0x00000000004958BC "("
 *   insn=0x00000000004958BC string=0x00000000004958C0 "` "
 *   insn=0x00000000004958C4 string=0x00000000004958C8 "K"
 *   insn=0x00000000004958D0 string=0x00000000004958D4 "\n"
 *   insn=0x00000000004958D8 string=0x00000000004958DC "h"
 *   insn=0x00000000004958EC string=0x0000000000495900 "J"
 *   insn=0x00000000004958F0 string=0x00000000004958F4 "a"
 *   insn=0x00000000004958F4 string=0x00000000004958F8 "_"
 *   insn=0x0000000000495908 string=0x000000000049590C "j"
 *   insn=0x000000000049590C string=0x0000000000495910 "\n"
 *   insn=0x0000000000495910 string=0x0000000000495914 "*"
 *   insn=0x0000000000495920 string=0x0000000000495924 "8"
 *   insn=0x0000000000495924 string=0x0000000000495928 "@"
 *   insn=0x0000000000495928 string=0x000000000049592C ""
 *   insn=0x000000000049592C string=0x0000000000495930 ""
 *   insn=0x0000000000495934 string=0x0000000000495938 ""
 *   insn=0x000000000049593C string=0x0000000000495940 "\t@"
 *   insn=0x0000000000495944 string=0x0000000000495948 "@"
 *   insn=0x0000000000495948 string=0x000000000049594C ""
 *   insn=0x000000000049594C string=0x0000000000495950 ""
 *   insn=0x0000000000495954 string=0x0000000000495958 ""
 *   insn=0x000000000049595C string=0x0000000000495960 "@"
 *   insn=0x000000000049596C string=0x00000000001F8510 "0'"
 *   insn=0x0000000000495988 string=0x000000000049598C "s"
 *   insn=0x0000000000495988 string=0x00000000001F9850 "0'"
 *   insn=0x0000000000495990 string=0x0000000000495994 "h"D9I"
 *   insn=0x0000000000495994 string=0x0000000000495998 "I"
 *   insn=0x0000000000495998 string=0x000000000049599C "?"
 *   insn=0x00000000004959A0 string=0x00000000004959A4 "h&D9"
 *   insn=0x00000000004959A8 string=0x00000000004959AC "?"
 *   insn=0x00000000004959AC string=0x00000000004959B0 "!"
 *   insn=0x00000000004959B0 string=0x00000000004959B4 "h*D9i"
 *   insn=0x00000000004959B4 string=0x00000000004959B8 "i"
 *   insn=0x00000000004959B8 string=0x00000000004959BC "?"
 *   insn=0x00000000004959C0 string=0x00000000004959C4 "h.D9\t"
 *   insn=0x00000000004959C4 string=0x00000000004959C8 "\t"
 *   insn=0x00000000004959C8 string=0x00000000004959CC "?"
 *   insn=0x00000000004959D4 string=0x00000000004959D8 "t"
 *   insn=0x00000000004959D8 string=0x00000000004959DC "h"
 *   insn=0x00000000004959DC string=0x00000000004959E0 ":"
 *   insn=0x00000000004959EC string=0x00000000004959F0 "z\n"
 *   insn=0x00000000004959F0 string=0x00000000004959F4 "4"
 *   insn=0x00000000004959F8 string=0x00000000004959FC ""
 *   insn=0x0000000000495A0C string=0x0000000000495A10 "\t@"
 *   insn=0x0000000000495A18 string=0x0000000000495A1C ""
 *   insn=0x0000000000495A2C string=0x0000000000495A30 "@"
 *   insn=0x0000000000495A48 string=0x0000000000495A4C "!"
 *   insn=0x0000000000495A70 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIButton::DrawRect(
        Caver::GUIButton *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  unsigned int v4; // w28
  unsigned int v7; // w23
  unsigned int v8; // w24
  int v9; // w8
  unsigned int v10; // w26
  Caver::GUIRoundedRect *v11; // x0
  unsigned int v12; // w27
  Caver::GUIRoundedRect *v13; // x0
  float v14; // s0
  __int64 v15; // x8
  Caver::GUITexturedRect *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x23
  unsigned __int8 v19; // w10
  unsigned __int8 v20; // w8
  unsigned __int8 v21; // w9
  unsigned __int8 v22; // w11
  _QWORD *v23; // x24
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x19
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  unsigned __int8 v30; // [xsp+Ch] [xbp-F4h]
  _OWORD v31[3]; // [xsp+20h] [xbp-E0h] BYREF
  float v32; // [xsp+50h] [xbp-B0h]
  float v33; // [xsp+54h] [xbp-ACh]
  __int64 v34; // [xsp+58h] [xbp-A8h]
  _OWORD v35[4]; // [xsp+60h] [xbp-A0h] BYREF
  __int64 v36; // [xsp+A8h] [xbp-58h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 292) )
    return;
  (*(void (__fastcall **)(Caver::GUIButton *, Caver::RenderingContext *, const Caver::Matrix4 *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4,
    a4);
  v35[2] = xmmword_6E9F10;
  v35[3] = xmmword_6E9F20;
  v35[0] = Caver::Matrix4::identityMatrix;
  v35[1] = xmmword_6E9F00;
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v35);
  v7 = *((unsigned __int8 *)this + 444);
  v8 = *((unsigned __int8 *)this + 445);
  v9 = *((_DWORD *)this + 72);
  v10 = *((unsigned __int8 *)this + 446);
  if ( (v9 & 2) != 0 )
  {
    if ( (int)(float)((float)v7 * 0.5) >= 255 )
      LOBYTE(v7) = -1;
    else
      LOBYTE(v7) = (int)(float)((float)v7 * 0.5);
    if ( (int)(float)((float)v8 * 0.5) >= 255 )
      LOBYTE(v8) = -1;
    else
      LOBYTE(v8) = (int)(float)((float)v8 * 0.5);
    if ( (int)(float)((float)v10 * 0.5) >= 255 )
      LOBYTE(v10) = -1;
    else
      LOBYTE(v10) = (int)(float)((float)v10 * 0.5);
  }
  v11 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 39);
  LOBYTE(v12) = *((_BYTE *)this + 447);
  if ( v11 )
  {
    Caver::GUIRoundedRect::Draw(v11, a2);
    v9 = *((_DWORD *)this + 72);
  }
  if ( (v9 & 1) != 0 && *((_QWORD *)this + 38) )
  {
    Caver::GUIRoundedRect::SetColor();
    v13 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 38);
LABEL_19:
    Caver::GUIRoundedRect::Draw(v13, a2);
    goto LABEL_20;
  }
  if ( *((_QWORD *)this + 37) )
  {
    Caver::GUIRoundedRect::SetColor();
    v13 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 37);
    goto LABEL_19;
  }
LABEL_20:
  v14 = (float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) + *((float *)this + 109);
  v32 = roundf((float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5)) + *((float *)this + 108));
  v33 = roundf(v14);
  v34 = 0x3F80000000000000LL;
  v31[0] = xmmword_583490;
  v31[1] = xmmword_5837E0;
  v31[2] = xmmword_5837F0;
  C_Matrix4Mul((const float *)v31, (const float *)this + 86, (float *)v35);
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v35);
  if ( (*((_BYTE *)this + 288) & 1) != 0 )
  {
    v15 = *((_QWORD *)this + 42);
    if ( v15 )
    {
      *(_DWORD *)(v15 + 28) = (unsigned __int8)v7
                            | (unsigned __int16)((unsigned __int8)v8 << 8)
                            | ((unsigned __int8)v10 << 16) & 0xFFFFFF
                            | ((unsigned __int8)v12 << 24);
      v16 = (Caver::GUITexturedRect *)*((_QWORD *)this + 42);
LABEL_25:
      Caver::GUITexturedRect::Draw(v16, a2);
      goto LABEL_26;
    }
  }
  v17 = *((_QWORD *)this + 41);
  if ( v17 )
  {
    *(_DWORD *)(v17 + 28) = (unsigned __int8)v7
                          | (unsigned __int16)((unsigned __int8)v8 << 8)
                          | ((unsigned __int8)v10 << 16) & 0xFFFFFF
                          | ((unsigned __int8)v12 << 24);
    v16 = (Caver::GUITexturedRect *)*((_QWORD *)this + 41);
    goto LABEL_25;
  }
LABEL_26:
  v18 = *((_QWORD *)this + 40);
  if ( v18 )
  {
    v10 = *(unsigned __int8 *)(v18 + 264);
    v4 = *(unsigned __int8 *)(v18 + 265);
    v12 = *(unsigned __int8 *)(v18 + 266);
    LOBYTE(v8) = *(_BYTE *)(v18 + 267);
    if ( (*((_BYTE *)this + 288) & 2) != 0 )
    {
      v19 = (int)(float)((float)v10 * 0.3) >= 255 ? -1 : (int)(float)((float)v10 * 0.3);
      v20 = (int)(float)((float)v4 * 0.3) >= 255 ? -1 : (int)(float)((float)v4 * 0.3);
      v21 = (int)(float)((float)v12 * 0.3) >= 255 ? -1 : (int)(float)((float)v12 * 0.3);
      if ( v12 != v21 || v4 != v20 || v10 != v19 )
      {
        v22 = *(_BYTE *)(v18 + 267);
        v23 = *(_QWORD **)(v18 + 280);
        *(_QWORD *)(v18 + 272) = 0;
        *(_QWORD *)(v18 + 280) = 0;
        v30 = v22;
        *(_DWORD *)(v18 + 264) = v19 | (v22 << 24) | (unsigned __int16)(v20 << 8) | (v21 << 16);
        if ( v23 )
        {
          v24 = v23[1] - 1LL;
          v23[1] = v24;
          if ( !v24 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
            v25 = v23[2] - 1LL;
            v23[2] = v25;
            if ( !v25 )
              (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
          }
        }
        Caver::GUILabel::UpdateText((Caver::GUILabel *)v18);
        LOBYTE(v8) = v30;
      }
    }
  }
  Caver::GUIView::DrawRect();
  v26 = *((_QWORD *)this + 40);
  if ( v26
    && ((unsigned __int8)v10 != *(unsigned __int8 *)(v26 + 264)
     || (unsigned __int8)v4 != *(unsigned __int8 *)(v26 + 265)
     || (unsigned __int8)v12 != *(unsigned __int8 *)(v26 + 266)
     || (unsigned __int8)v8 != *(unsigned __int8 *)(v26 + 267)) )
  {
    v27 = *(_QWORD **)(v26 + 280);
    *(_QWORD *)(v26 + 272) = 0;
    *(_QWORD *)(v26 + 280) = 0;
    *(_DWORD *)(v26 + 264) = (unsigned __int8)v10
                           | (unsigned __int16)((unsigned __int8)v4 << 8)
                           | ((unsigned __int8)v12 << 16) & 0xFFFFFF
                           | ((unsigned __int8)v8 << 24);
    if ( v27 )
    {
      v28 = v27[1] - 1LL;
      v27[1] = v28;
      if ( !v28 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
        v29 = v27[2] - 1LL;
        v27[2] = v29;
        if ( !v29 )
          (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
      }
    }
    Caver::GUILabel::UpdateText((Caver::GUILabel *)v26);
  }
}

