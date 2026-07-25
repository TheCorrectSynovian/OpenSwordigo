/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CD540
 * Mangled: _ZN5Caver20DraggableOverlayItem8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::DraggableOverlayItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5550  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002023B0  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 51
 *   insn=0x00000000003CD558 string=0x00000000003CD55C "X"
 *   insn=0x00000000003CD55C string=0x00000000003CD560 ""
 *   insn=0x00000000003CD568 string=0x00000000003CD56C " 5G"
 *   insn=0x00000000003CD568 string=0x0000000000583734 "o"
 *   insn=0x00000000003CD580 string=0x00000000003CD584 "   "
 *   insn=0x00000000003CD584 string=0x00000000003CD588 ""
 *   insn=0x00000000003CD588 string=0x00000000003CD58C "@"
 *   insn=0x00000000003CD58C string=0x00000000003CD590 "\t)@)"
 *   insn=0x00000000003CD59C string=0x00000000003CD5A0 """
 *   insn=0x00000000003CD5A0 string=0x00000000003CD5A4 "!8""
 *   insn=0x00000000003CD5A4 string=0x00000000003CD5A8 "!"
 *   insn=0x00000000003CD5A8 string=0x00000000003CD5AC "   "
 *   insn=0x00000000003CD5B0 string=0x00000000003CD5B4 "h"
 *   insn=0x00000000003CD5B4 string=0x00000000003CD600 ""
 *   insn=0x00000000003CD5B8 string=0x00000000003CD5BC "B"
 *   insn=0x00000000003CD5BC string=0x00000000003CD5C0 "!8""
 *   insn=0x00000000003CD5C0 string=0x00000000003CD5C4 "!"
 *   insn=0x00000000003CD5C4 string=0x00000000003CD5C8 "   "
 *   insn=0x00000000003CD5D4 string=0x00000000003CD5D8 "!8""
 *   insn=0x00000000003CD5D8 string=0x00000000003CD5DC "!"
 *   insn=0x00000000003CD5DC string=0x00000000003CD5E0 "   "
 *   insn=0x00000000003CD5EC string=0x00000000003CD5F0 "A8!"
 *   insn=0x00000000003CD5F0 string=0x00000000003CD5F4 "!"
 *   insn=0x00000000003CD5F4 string=0x00000000003CD5F8 "   "
 *   insn=0x00000000003CD5F8 string=0x00000000003CD5FC "\t"
 *   insn=0x00000000003CD618 string=0x00000000003CD61C "@"
 *   insn=0x00000000003CD624 string=0x00000000003CD628 ""
 *   insn=0x00000000003CD628 string=0x00000000003CD62C "`"
 *   insn=0x00000000003CD62C string=0x00000000003CD718 ""
 *   insn=0x00000000003CD630 string=0x00000000003CD634 "@"
 *   insn=0x00000000003CD634 string=0x00000000003CD638 "\t8("
 *   insn=0x00000000003CD63C string=0x00000000003CD640 ""
 *   insn=0x00000000003CD63C string=0x00000000003CD654 "(! "
 *   insn=0x00000000003CD644 string=0x00000000003CD648 ""
 *   insn=0x00000000003CD654 string=0x00000000003CD658 "m"
 *   insn=0x00000000003CD65C string=0x00000000003CD660 " \t "
 *   insn=0x00000000003CD660 string=0x00000000003CD664 "A(("
 *   insn=0x00000000003CD664 string=0x00000000003CD668 "B8 "
 *   insn=0x00000000003CD668 string=0x00000000003CD66C "!8""
 *   insn=0x00000000003CD66C string=0x00000000003CD670 "A(!"
 *   insn=0x00000000003CD68C string=0x00000000001F5550 "P'"
 *   insn=0x00000000003CD6A8 string=0x00000000003CD6AC ""
 *   insn=0x00000000003CD6B8 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003CD6BC string=0x00000000003CD6C0 "h"
 *   insn=0x00000000003CD6D0 string=0x00000000003CD6D4 "7"
 *   insn=0x00000000003CD6E4 string=0x00000000003CD6E8 "Z"
 *   insn=0x00000000003CD6E8 string=0x00000000003CD6EC ""
 *   insn=0x00000000003CD6E8 string=0x00000000001F9850 "0'"
 *   insn=0x00000000003CD71C string=0x00000000003CD720 "\t8("
 *   insn=0x00000000003CD720 string=0x00000000003CD724 "(! "
 *   insn=0x00000000003CD730 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DraggableOverlayItem::DrawRect(
        Caver::DraggableOverlayItem *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  float *v5; // x8
  float v6; // w9
  float v7; // w10
  __int64 v10; // x11
  __int64 v11; // d2
  __int64 v12; // x0
  float v13; // s9
  Caver::GUIRoundedRect *v14; // x0
  int v15; // [xsp+0h] [xbp-70h]
  float v16; // [xsp+18h] [xbp-58h] BYREF
  __int64 v17; // [xsp+1Ch] [xbp-54h]
  float v18; // [xsp+24h] [xbp-4Ch]
  __int64 v19; // [xsp+28h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (float *)((char *)this + 148);
  if ( *((float *)this + 39) <= 0.001 )
    v5 = (float *)((char *)this + 132);
  v6 = *v5;
  v7 = v5[1];
  if ( fabsf(*((float *)this + 62) - *v5) > 0.0001
    || fabsf(*((float *)this + 63) - v7) > 0.0001
    || fabsf(*((float *)this + 64) - v5[2]) > 0.0001
    || fabsf(*((float *)this + 65) - v5[3]) > 0.0001 )
  {
    v10 = *((_QWORD *)v5 + 1);
    *((float *)this + 62) = v6;
    *((float *)this + 63) = v7;
    *((_QWORD *)this + 32) = v10;
    v16 = v6;
    v11 = *(_QWORD *)(v5 + 1);
    v17 = v11;
    v18 = v5[3];
    v12 = *((_QWORD *)this + 33);
    if ( v12 )
    {
      v13 = *(float *)(v12 + 88) - v18;
      if ( !*(_DWORD *)(v12 + 8) )
      {
        v15 = v11;
        (*(void (__fastcall **)(__int64, Caver::RenderingContext *, const Caver::Rectangle *))(*(_QWORD *)v12 + 8LL))(
          v12,
          a2,
          a3);
        LODWORD(v11) = v15;
      }
      if ( v13 <= 0.0 )
        goto LABEL_12;
    }
    else
    {
      v13 = 0.0 - v18;
      if ( (float)(0.0 - v18) <= 0.0 )
        goto LABEL_12;
    }
    *(float *)&v17 = *(float *)&v11 - (float)(v13 * 0.5);
    v18 = (float)((float)(v13 * 0.5) + (float)(*(float *)&v17 + (float)((float)(*(float *)&v11 + v18) - *(float *)&v17)))
        - *(float *)&v17;
LABEL_12:
    Caver::GUIRoundedRect::CreateWithOuterBounds(
      (Caver::DraggableOverlayItem *)((char *)this + 264),
      (const Caver::Rectangle *)&v16);
    Caver::GUIRoundedRect::CreateWithOuterBounds(
      (Caver::DraggableOverlayItem *)((char *)this + 432),
      (const Caver::Rectangle *)&v16);
  }
  (*(void (__fastcall **)(Caver::DraggableOverlayItem *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  if ( *((_QWORD *)this + 76) )
    v14 = (Caver::DraggableOverlayItem *)((char *)this + 432);
  else
    v14 = (Caver::DraggableOverlayItem *)((char *)this + 264);
  Caver::GUIRoundedRect::Draw(v14, a2);
  Caver::GUIView::DrawRect();
}

