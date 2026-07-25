/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A99F4
 * Mangled: _ZN5Caver14GUIRoundedRect12CreateSpriteEv
 * Demangled: Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Callers: 1
 *   0x0000000000203CD0  Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8350  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FD1A0  Caver::Sprite::AddFaces(int,ushort *)
 *
 * Referenced strings: 16
 *   insn=0x00000000004A9A0C string=0x00000000004A9A10 "V"
 *   insn=0x00000000004A9A1C string=0x00000000004A9A20 "B"
 *   insn=0x00000000004A9A34 string=0x00000000004A9A38 ">?"
 *   insn=0x00000000004A9A38 string=0x00000000001F9730 "0'"
 *   insn=0x00000000004A9A3C string=0x00000000004A9A40 "|?"
 *   insn=0x00000000004A9A40 string=0x00000000001F9830 "0'"
 *   insn=0x00000000004A9AB4 string=0x00000000004A9AB8 "!(#"
 *   insn=0x00000000004A9AD0 string=0x00000000004A9AD4 "B($"
 *   insn=0x00000000004A9AE4 string=0x00000000004A9AE8 ""
 *   insn=0x00000000004A9AE8 string=0x00000000004A9AEC "\nkh"
 *   insn=0x00000000004A9AF0 string=0x00000000004A9AF4 "(kh"
 *   insn=0x00000000004A9AF4 string=0x00000000004A9AF8 "Iki"
 *   insn=0x00000000004A9B14 string=0x00000000001F8350 "0'"
 *   insn=0x00000000004A9B24 string=0x00000000004A9B2C "A"
 *   insn=0x00000000004A9B34 string=0x00000000001FD1A0 "0'"
 *   insn=0x00000000004A9B64 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIRoundedRect::CreateSprite(Caver::GUIRoundedRect *this)
{
  Caver::Sprite *v2; // x19
  float v3; // s5
  int v4; // w23
  float v5; // s1
  float v6; // s2
  float v7; // s3
  float v8; // s4
  float v9; // s5
  float v10; // s0
  float v11; // s0
  __int64 v12; // x9
  __int64 v13; // x8
  int v14; // w10
  int v15; // w11
  _DWORD v17[2]; // [xsp+8h] [xbp-98h] BYREF
  _DWORD v18[2]; // [xsp+10h] [xbp-90h] BYREF
  _DWORD v19[4]; // [xsp+18h] [xbp-88h]
  _DWORD v20[4]; // [xsp+28h] [xbp-78h]
  float v21[4]; // [xsp+38h] [xbp-68h]
  float v22[4]; // [xsp+48h] [xbp-58h]
  __int64 v23; // [xsp+58h] [xbp-48h]

  v2 = (Caver::GUIRoundedRect *)((char *)this + 80);
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Sprite::Init();
  Caver::Sprite::Clear(v2);
  v3 = *((float *)this + 7);
  v4 = 0;
  v5 = *(float *)(*(_QWORD *)this + 92LL);
  v6 = *(float *)(*(_QWORD *)this + 96LL);
  v7 = *(float *)(*(_QWORD *)this + 100LL);
  v8 = *(float *)(*(_QWORD *)this + 104LL);
  v22[0] = *((float *)this + 3);
  v22[1] = v3;
  v22[2] = v3 + *((float *)this + 9);
  v22[3] = v22[0] + *((float *)this + 5);
  v9 = *((float *)this + 8);
  v21[0] = *((float *)this + 4);
  v21[1] = v9;
  v21[2] = v9 + *((float *)this + 10);
  v21[3] = v21[0] + *((float *)this + 6);
  v10 = *((float *)this + 11);
  *(float *)v20 = v5;
  *(float *)&v20[1] = v10;
  *(float *)&v20[2] = v10 + *((float *)this + 13);
  *(float *)&v20[3] = v5 + v7;
  v11 = *((float *)this + 12);
  *(float *)v19 = v6;
  *(float *)&v19[1] = v11;
  *(float *)&v19[2] = v11 + *((float *)this + 14);
  *(float *)&v19[3] = v6 + v8;
  do
  {
    v12 = v4 & 0xFFFFFFFC;
    v13 = 4LL * (v4 & 3);
    v14 = *(_DWORD *)((char *)v22 + v13);
    v15 = *(_DWORD *)((char *)v21 + v12);
    LODWORD(v13) = *(_DWORD *)((char *)v20 + v13);
    LODWORD(v12) = *(_DWORD *)((char *)v19 + v12);
    v18[0] = v14;
    v18[1] = v15;
    v17[0] = v13;
    v17[1] = v12;
    Caver::Sprite::AddVertex(
      v2,
      (const Caver::Vector2 *)v18,
      (const Caver::Vector2 *)v17,
      (Caver::GUIRoundedRect *)((char *)this + 8));
    ++v4;
  }
  while ( v4 != 16 );
  return Caver::Sprite::AddFaces(v2, 18, word_6E8878);
}

