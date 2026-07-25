/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E0F4
 * Mangled: _ZN5Caver20InventoryTrinketSlot8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::InventoryTrinketSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x000000000040E114 string=0x00000000001F9850 "0'"
 *   insn=0x000000000040E118 string=0x000000000040E11C "h"
 *   insn=0x000000000040E120 string=0x000000000040E124 "\tUP"
 *   insn=0x000000000040E128 string=0x000000000040E138 ")"
 *   insn=0x000000000040E12C string=0x000000000040E130 "J"
 *   insn=0x000000000040E138 string=0x000000000040E19C "]Q"
 *   insn=0x000000000040E144 string=0x000000000040E148 ""
 *   insn=0x000000000040E14C string=0x000000000040E150 "!"
 *   insn=0x000000000040E158 string=0x000000000040E15C "\t@"
 *   insn=0x000000000040E164 string=0x000000000040E168 ""
 *   insn=0x000000000040E16C string=0x000000000040E170 "!"
 *   insn=0x000000000040E178 string=0x000000000040E17C "@"
 *   insn=0x000000000040E19C string=0x000000000040E1A0 "W"
 *   insn=0x000000000040E1B4 string=0x000000000040E1B8 "\t@"
 *   insn=0x000000000040E1C4 string=0x000000000040E1C8 ""
 *   insn=0x000000000040E1D4 string=0x000000000040E1D8 "@"
 *   insn=0x000000000040E204 string=0x000000000040E208 ""
 *   insn=0x000000000040E214 string=0x00000000001F7210 "0'"
 *   insn=0x000000000040E22C string=0x000000000040E230 "T"
 *   insn=0x000000000040E230 string=0x00000000001F8B80 "0'"
 *   insn=0x000000000040E234 string=0x000000000040E238 "5"
 *   insn=0x000000000040E23C string=0x000000000040E240 ""
 *   insn=0x000000000040E24C string=0x000000000040E250 "\t@"
 *   insn=0x000000000040E25C string=0x000000000040E260 ""
 *   insn=0x000000000040E26C string=0x000000000040E270 "@"
 *   insn=0x000000000040E280 string=0x000000000040E284 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryTrinketSlot::DrawRect(
        Caver::InventoryTrinketSlot *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  _QWORD *v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x21
  _BOOL4 v10; // w24
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x23
  _QWORD *v15; // t2
  __int64 v16; // x8

  Caver::GUIView::DrawRect();
  if ( !*((_QWORD *)this + 38) )
    return;
  v7 = (_QWORD *)*((_QWORD *)this + 34);
  v8 = v7[32];
  v9 = (_QWORD *)v7[33];
  if ( v9 )
    ++v9[1];
  if ( v8 )
  {
    v10 = 0;
  }
  else
  {
    v15 = v7 + 34;
    v13 = v7[34];
    v14 = (_QWORD *)v15[1];
    if ( !v14 )
    {
      v10 = v13 == 0;
      if ( v9 )
        goto LABEL_7;
      goto LABEL_16;
    }
    v10 = v13 == 0;
    if ( !v14[1] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  if ( v9 )
  {
LABEL_7:
    v11 = v9[1] - 1LL;
    v9[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v12 = v9[2] - 1LL;
      v9[2] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        if ( !v10 )
          return;
LABEL_17:
        (*(void (__fastcall **)(Caver::InventoryTrinketSlot *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
          this,
          a2,
          a4);
        Caver::RenderingContext::SetIdentityMatrix(a2);
        Caver::GUITexturedRect::Draw(*((Caver::GUITexturedRect **)this + 38), a2);
        return;
      }
    }
  }
LABEL_16:
  if ( v10 )
    goto LABEL_17;
}

