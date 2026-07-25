/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A45C
 * Mangled: _ZN5Caver12MenuItemSlot8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::MenuItemSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 13
 *   insn=0x000000000042A474 string=0x000000000042A478 ""
 *   insn=0x000000000042A480 string=0x000000000042A484 "c3"
 *   insn=0x000000000042A484 string=0x00000000001F7210 "0'"
 *   insn=0x000000000042A490 string=0x00000000001F8B80 "0'"
 *   insn=0x000000000042A4A8 string=0x000000000042A4AC ""
 *   insn=0x000000000042A4B8 string=0x000000000042A4BC ""
 *   insn=0x000000000042A4C0 string=0x000000000042A4C4 "H"
 *   insn=0x000000000042A4FC string=0x000000000042A500 ""
 *   insn=0x000000000042A508 string=0x000000000042A50C ""
 *   insn=0x000000000042A50C string=0x000000000042A510 "\t"
 *   insn=0x000000000042A514 string=0x000000000042A518 "\n"
 *   insn=0x000000000042A518 string=0x000000000042A51C "*"
 *   insn=0x000000000042A51C string=0x000000000042A520 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MenuItemSlot::DrawRect(
        Caver::MenuItemSlot *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 result; // x0
  Caver::GUITexturedRect *v7; // x0
  float v8; // s0
  int v9; // w8

  (*(void (__fastcall **)(Caver::MenuItemSlot *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::GUITexturedRect::Draw((Caver::MenuItemSlot *)((char *)this + 296), a2);
  result = Caver::GUITexturedRect::Draw((Caver::MenuItemSlot *)((char *)this + 520), a2);
  if ( *((_BYTE *)this + 289) )
  {
    v7 = (Caver::MenuItemSlot *)((char *)this + 408);
    *((_DWORD *)this + 109) = -1;
  }
  else
  {
    if ( !*((_BYTE *)this + 632) )
      return result;
    v8 = *((float *)this + 159) * 7.85398152 + -1.57079633;
    v9 = (int)(float)((float)((float)(sinf(v8) * 0.5) + 0.5) * 255.0);
    if ( v9 >= 255 )
      LOBYTE(v9) = -1;
    v7 = (Caver::MenuItemSlot *)((char *)this + 408);
    *((_DWORD *)this + 109) = (unsigned __int8)v9
                            | ((unsigned __int8)v9 << 24)
                            | ((unsigned __int8)v9 << 16)
                            | ((unsigned __int8)v9 << 8);
  }
  return Caver::GUITexturedRect::Draw(v7, a2);
}

