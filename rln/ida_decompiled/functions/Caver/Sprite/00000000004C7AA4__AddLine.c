/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7AA4
 * Mangled: _ZN5Caver6Sprite7AddLineERKNS_7Vector2ES3_fRKNS_9RectangleERKNS_5ColorE
 * Demangled: Caver::Sprite::AddLine(Caver::Vector2 const&,Caver::Vector2 const&,float,Caver::Rectangle const&,Caver::Color const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C90  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *
 * Referenced strings: 18
 *   insn=0x00000000004C7ABC string=0x00000000004C7AC0 "X"
 *   insn=0x00000000004C7AC0 string=0x00000000004C7AC4 ""
 *   insn=0x00000000004C7ACC string=0x00000000004C7AD0 ""
 *   insn=0x00000000004C7AEC string=0x00000000004C7AF0 "!8#"
 *   insn=0x00000000004C7B00 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004C7B14 string=0x00000000004C7B18 "!("
 *   insn=0x00000000004C7B18 string=0x00000000004C7B1C "D8 "
 *   insn=0x00000000004C7B1C string=0x00000000004C7B20 "e8!"
 *   insn=0x00000000004C7B24 string=0x00000000004C7B28 "#(#"
 *   insn=0x00000000004C7B40 string=0x00000000004C7B44 "%(#"
 *   insn=0x00000000004C7B44 string=0x00000000004C7B48 "@8 "
 *   insn=0x00000000004C7B48 string=0x00000000004C7B4C "a8!"
 *   insn=0x00000000004C7B68 string=0x00000000004C7B6C """
 *   insn=0x00000000004C7B80 string=0x00000000004C7B84 " (""
 *   insn=0x00000000004C7BDC string=0x00000000004C7BE0 ","
 *   insn=0x00000000004C7BE0 string=0x00000000004C7BE4 ""
 *   insn=0x00000000004C7BE0 string=0x00000000001F4C90 "P'"
 *   insn=0x00000000004C7C10 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::AddLine(
        Caver::Sprite *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        float a4,
        const Caver::Rectangle *a5,
        const Caver::Color *a6)
{
  float v11; // s0
  float v13; // s3
  float v14; // s2
  float v15; // s3
  float v16; // s0
  float v17; // w9
  float v18; // s0
  float v19; // s1
  char v20; // w11
  float v22; // [xsp+0h] [xbp-A0h] BYREF
  float v23; // [xsp+4h] [xbp-9Ch]
  __int16 v24; // [xsp+8h] [xbp-98h] BYREF
  char v25; // [xsp+Ah] [xbp-96h]
  char v26; // [xsp+Bh] [xbp-95h]
  __int16 v27; // [xsp+Ch] [xbp-94h]
  char v28; // [xsp+Eh] [xbp-92h]
  char v29; // [xsp+Fh] [xbp-91h]
  __int16 v30; // [xsp+10h] [xbp-90h]
  char v31; // [xsp+12h] [xbp-8Eh]
  char v32; // [xsp+13h] [xbp-8Dh]
  __int16 v33; // [xsp+14h] [xbp-8Ch]
  char v34; // [xsp+16h] [xbp-8Ah]
  char v35; // [xsp+17h] [xbp-89h]
  float v36[8]; // [xsp+18h] [xbp-88h] BYREF
  float v37[8]; // [xsp+38h] [xbp-68h] BYREF
  __int64 v38; // [xsp+58h] [xbp-48h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = -(float)(*(float *)a3 - *(float *)a2);
  v22 = *((float *)a3 + 1) - *((float *)a2 + 1);
  v23 = v11;
  Caver::Vector2::Normalize((Caver::Vector2 *)&v22);
  v13 = *((float *)a2 + 1);
  v14 = (float)(v22 * a4) + *(float *)a2;
  v37[0] = *(float *)a2 - (float)(v22 * a4);
  v37[1] = v13 - (float)(v23 * a4);
  v37[2] = v14;
  v37[3] = (float)(v23 * a4) + v13;
  v15 = *((float *)a3 + 1);
  v16 = *(float *)a3 - (float)(v22 * a4);
  v37[4] = (float)(v22 * a4) + *(float *)a3;
  v37[5] = (float)(v23 * a4) + v15;
  v37[6] = v16;
  v37[7] = v15 - (float)(v23 * a4);
  v17 = *((float *)a5 + 1);
  v36[0] = *(float *)a5;
  v36[1] = v17;
  v18 = *((float *)a5 + 2);
  v36[3] = v17;
  v36[2] = v18 + v36[0];
  v19 = *((float *)a5 + 3);
  v36[4] = v18 + v36[0];
  v36[6] = v36[0];
  v36[5] = v19 + v17;
  v36[7] = v19 + v17;
  v24 = *(_WORD *)a6;
  v25 = *((_BYTE *)a6 + 2);
  v20 = *((_BYTE *)a6 + 3);
  v27 = v24;
  v28 = v25;
  v26 = v20;
  v29 = v20;
  v30 = v24;
  v31 = v25;
  v32 = v20;
  v33 = v24;
  v34 = v25;
  v35 = v20;
  return Caver::Sprite::AddQuad(
           this,
           (const Caver::Vector2 *)v37,
           (const Caver::Vector2 *)v36,
           (const Caver::Color *)&v24);
}

