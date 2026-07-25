/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000495D00
 * Mangled: _ZN5Caver9GUIButton19SetHighlightedImageERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 2
 *   0x00000000001FD100  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x00000000002029D0  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *   0x0000000000495E34  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x0000000000495D14 string=0x0000000000495D18 "W"
 *   insn=0x0000000000495D28 string=0x0000000000495D2C "h"
 *   insn=0x0000000000495D3C string=0x0000000000495D40 "(~"
 *   insn=0x0000000000495D40 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000495D48 string=0x00000000001FD850 "0'"
 *   insn=0x0000000000495D5C string=0x0000000000495D60 "@"
 *   insn=0x0000000000495D60 string=0x0000000000495D64 ""
 *   insn=0x0000000000495D64 string=0x0000000000495D68 ""
 *   insn=0x0000000000495D6C string=0x0000000000495D70 ""
 *   insn=0x0000000000495D70 string=0x0000000000495D74 ""
 *   insn=0x0000000000495D7C string=0x0000000000495D80 "L"
 *   insn=0x0000000000495D80 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000495D98 string=0x0000000000495D9C ""
 *   insn=0x0000000000495DAC string=0x0000000000495DB0 "`"
 *   insn=0x0000000000495DB4 string=0x0000000000495DB8 "@"
 *   insn=0x0000000000495DB8 string=0x0000000000495DBC ""
 *   insn=0x0000000000495DBC string=0x0000000000495DC0 ""
 *   insn=0x0000000000495DC4 string=0x0000000000495DC8 ""
 *   insn=0x0000000000495DC8 string=0x0000000000495DCC ""
 *   insn=0x0000000000495DD4 string=0x0000000000495DD8 "6"
 *   insn=0x0000000000495DE8 string=0x0000000000495E04 "3"
 *   insn=0x0000000000495E04 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000495E10 string=0x0000000000495E28 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIButton::SetHighlightedImage(__int64 a1, _QWORD *a2)
{
  Caver::GUITexturedRect *v3; // x21
  _QWORD *v4; // x22
  _DWORD *v5; // x0
  int v6; // w8
  _QWORD *v7; // x19
  _DWORD *v8; // x0
  int v9; // w8

  _ReadStatusReg(TPIDR_EL0);
  if ( *a2 )
  {
    if ( !*(_QWORD *)(a1 + 336) )
    {
      v3 = (Caver::GUITexturedRect *)operator new(0x70u);
      Caver::GUITexturedRect::GUITexturedRect(v3);
      v4 = *(_QWORD **)(a1 + 336);
      *(_QWORD *)(a1 + 336) = v3;
      if ( v4 )
      {
        v5 = (_DWORD *)*v4;
        if ( *v4 )
        {
          v6 = v5[2] - 1;
          v5[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
        }
        operator delete(v4);
      }
    }
    Caver::GUITexturedRect::InitWithTexture();
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 336);
    *(_QWORD *)(a1 + 336) = 0;
    if ( v7 )
    {
      v8 = (_DWORD *)*v7;
      if ( *v7 )
      {
        v9 = v8[2] - 1;
        v8[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
      }
      operator delete(v7);
    }
  }
}

