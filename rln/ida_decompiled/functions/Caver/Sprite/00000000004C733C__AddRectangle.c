/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C733C
 * Mangled: _ZN5Caver6Sprite12AddRectangleERKNS_9RectangleES3_RKNS_5ColorE
 * Demangled: Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *
 * Callers: 1
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *
 * Callees: 3
 *   0x00000000001F4C90  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 13
 *   insn=0x00000000004C7350 string=0x00000000004C7354 "W"
 *   insn=0x00000000004C7360 string=0x00000000004C7364 "!5G"
 *   insn=0x00000000004C7360 string=0x0000000000583734 "o"
 *   insn=0x00000000004C7368 string=0x00000000004C736C "`"
 *   insn=0x00000000004C737C string=0x00000000004C7380 "`""
 *   insn=0x00000000004C7398 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000004C73B8 string=0x00000000004C73BC """
 *   insn=0x00000000004C73D4 string=0x00000000004C73D8 " (""
 *   insn=0x00000000004C73F4 string=0x00000000004C73F8 """
 *   insn=0x00000000004C740C string=0x00000000004C7410 " (""
 *   insn=0x00000000004C7468 string=0x00000000004C746C "\t"
 *   insn=0x00000000004C746C string=0x00000000001F4C90 "P'"
 *   insn=0x00000000004C7498 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::AddRectangle(
        Caver::Sprite *this,
        const Caver::Rectangle *a2,
        const Caver::Rectangle *a3,
        const Caver::Color *a4)
{
  float v5; // s0
  Caver::Rectangle *v9; // x0
  float v10; // w9
  float v11; // s0
  float v12; // s1
  float v13; // w9
  float v14; // s0
  float v15; // s1
  char v16; // w11
  __int16 v18; // [xsp+8h] [xbp-88h] BYREF
  char v19; // [xsp+Ah] [xbp-86h]
  char v20; // [xsp+Bh] [xbp-85h]
  __int16 v21; // [xsp+Ch] [xbp-84h]
  char v22; // [xsp+Eh] [xbp-82h]
  char v23; // [xsp+Fh] [xbp-81h]
  __int16 v24; // [xsp+10h] [xbp-80h]
  char v25; // [xsp+12h] [xbp-7Eh]
  char v26; // [xsp+13h] [xbp-7Dh]
  __int16 v27; // [xsp+14h] [xbp-7Ch]
  char v28; // [xsp+16h] [xbp-7Ah]
  char v29; // [xsp+17h] [xbp-79h]
  float v30[8]; // [xsp+18h] [xbp-78h] BYREF
  float v31[8]; // [xsp+38h] [xbp-58h] BYREF
  __int64 v32; // [xsp+58h] [xbp-38h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((float *)this + 4);
  v9 = (Caver::Sprite *)((char *)this + 8);
  if ( v5 >= 0.001 )
    Caver::Rectangle::ExpandToincludeRectangle(v9, a2);
  else
    *(_OWORD *)v9 = *(_OWORD *)a2;
  v10 = *((float *)a2 + 1);
  v31[0] = *(float *)a2;
  v31[1] = v10;
  v11 = *((float *)a2 + 2);
  v31[3] = v10;
  v31[2] = v11 + v31[0];
  v12 = *((float *)a2 + 3);
  v31[4] = v11 + v31[0];
  v31[6] = v31[0];
  v31[5] = v12 + v10;
  v31[7] = v12 + v10;
  v13 = *((float *)a3 + 1);
  v30[0] = *(float *)a3;
  v30[1] = v13;
  v14 = *((float *)a3 + 2);
  v30[3] = v13;
  v30[2] = v14 + v30[0];
  v15 = *((float *)a3 + 3);
  v30[4] = v14 + v30[0];
  v30[6] = v30[0];
  v30[5] = v15 + v13;
  v30[7] = v15 + v13;
  v18 = *(_WORD *)a4;
  v19 = *((_BYTE *)a4 + 2);
  v16 = *((_BYTE *)a4 + 3);
  v21 = v18;
  v22 = v19;
  v20 = v16;
  v23 = v16;
  v24 = v18;
  v25 = v19;
  v26 = v16;
  v27 = v18;
  v28 = v19;
  v29 = v16;
  return Caver::Sprite::AddQuad(
           this,
           (const Caver::Vector2 *)v31,
           (const Caver::Vector2 *)v30,
           (const Caver::Color *)&v18);
}

