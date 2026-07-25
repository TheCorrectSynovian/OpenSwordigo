/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046DE18
 * Mangled: _ZN5Caver14SceneGridLayer10MoveObjectEPNS_14SceneGridEntryERKNS_9RectangleE
 * Demangled: Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000200110  Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callees: 3
 *   0x00000000001F4BE0  Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *   0x00000000001F8770  Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *   0x00000000001FE8C0  Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry *)
 *
 * Referenced strings: 32
 *   insn=0x000000000046DE38 string=0x000000000046DE3C "vBB"
 *   insn=0x000000000046DE50 string=0x000000000046DE54 "G*"
 *   insn=0x000000000046DE54 string=0x000000000046DE58 "<"
 *   insn=0x000000000046DE54 string=0x00000000001F8770 "0'"
 *   insn=0x000000000046DE64 string=0x000000000046DE68 "\t"
 *   insn=0x000000000046DE68 string=0x000000000046DE6C "\n"
 *   insn=0x000000000046DE6C string=0x000000000046DE70 "?"
 *   insn=0x000000000046DE70 string=0x000000000046DE74 ""
 *   insn=0x000000000046DE7C string=0x000000000046DE80 "="
 *   insn=0x000000000046DE84 string=0x000000000046DE88 "&"
 *   insn=0x000000000046DE90 string=0x000000000046DE94 "5="
 *   insn=0x000000000046DE94 string=0x000000000046DE98 "\="
 *   insn=0x000000000046DE98 string=0x000000000046DE9C "="
 *   insn=0x000000000046DEB4 string=0x000000000046DEB8 "l"
 *   insn=0x000000000046DED0 string=0x000000000046DED4 "k"
 *   insn=0x000000000046DEEC string=0x000000000046DEF0 " "
 *   insn=0x000000000046DEF0 string=0x000000000046DEF4 "sB"
 *   insn=0x000000000046DF0C string=0x000000000046DF10 ""
 *   insn=0x000000000046DF20 string=0x000000000046DF24 "hB"
 *   insn=0x000000000046DF28 string=0x000000000046DF2C ""
 *   insn=0x000000000046DF30 string=0x000000000046DF34 "`B"
 *   insn=0x000000000046DF38 string=0x000000000046DF3C "V="
 *   insn=0x000000000046DF3C string=0x000000000046DF40 "5="
 *   insn=0x000000000046DF4C string=0x000000000046DF50 "?A"
 *   insn=0x000000000046DF54 string=0x000000000046DF58 "L"
 *   insn=0x000000000046DF58 string=0x000000000046DF5C "_"
 *   insn=0x000000000046DF60 string=0x000000000046DF64 "?"
 *   insn=0x000000000046DF6C string=0x000000000046DF70 "k"
 *   insn=0x000000000046DF88 string=0x000000000046DF8C " "
 *   insn=0x000000000046DF90 string=0x00000000001F4BE0 "P'"
 *   insn=0x000000000046DF98 string=0x000000000046DF9C ""
 *   insn=0x000000000046DFA4 string=0x000000000046DFA8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::SceneGridLayer::MoveObject(
        Caver::SceneGridLayer *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3)
{
  __int64 v4; // x22
  const Caver::Rectangle *v5; // x21
  int v7; // w24
  unsigned __int64 v8; // x23
  unsigned __int64 result; // x0
  __int64 v10; // x25
  __int64 v11; // x26
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x10
  int v14; // w27
  unsigned __int64 v15; // x11
  int v16; // w22
  int v17; // w21
  int v18; // w28
  int v19; // w23
  bool v20; // cc
  int v21; // w22
  int v22; // w21
  int v23; // w28
  int v24; // w23
  unsigned __int64 v25; // [xsp+8h] [xbp-98h]
  unsigned __int64 v26; // [xsp+10h] [xbp-90h]
  unsigned __int64 v27; // [xsp+18h] [xbp-88h]
  const Caver::Rectangle *v28; // [xsp+20h] [xbp-80h]
  unsigned __int64 v29; // [xsp+28h] [xbp-78h]
  int v30; // [xsp+34h] [xbp-6Ch]
  int v31; // [xsp+38h] [xbp-68h]
  unsigned __int64 v32; // [xsp+40h] [xbp-60h]
  int v33; // [xsp+4Ch] [xbp-54h]

  v4 = *(_QWORD *)((char *)a2 + 36);
  v5 = a3;
  v7 = (__int16)v4;
  v8 = (unsigned __int64)v4 >> 16;
  result = Caver::SceneGridLayer::GridRectForAABB(this, a3);
  v10 = v4 << 16 >> 48;
  v11 = v4 >> 48;
  v33 = (__int16)result;
  v12 = result >> 16;
  v13 = HIDWORD(result);
  v31 = v4;
  v32 = result;
  if ( (int)v10 <= v4 >> 48 )
  {
    v28 = v5;
    v29 = (unsigned __int64)v4 >> 16;
    v16 = SWORD1(v4);
    v17 = SWORD1(result);
    v18 = SWORD2(result);
    v14 = SHIWORD(result);
    v19 = v10;
    v26 = HIDWORD(result);
    v27 = result >> 16;
    v25 = HIWORD(result);
    v30 = v7;
    do
    {
      if ( v7 <= v31 >> 16 )
      {
        do
        {
          if ( v19 > v14 || v19 < v18 || v7 < v33 || v7 > v17 )
            result = Caver::SceneGridCell::RemoveEntry(
                       (Caver::SceneGridCell *)(*((_QWORD *)this + 6) + 16LL * (v7 + v19 * *((_DWORD *)this + 10))),
                       a2);
          v20 = v7++ < v16;
        }
        while ( v20 );
      }
      v7 = v30;
      v20 = v19++ < (int)v11;
    }
    while ( v20 );
    v5 = v28;
    LOWORD(v8) = v29;
    LOWORD(v13) = v26;
    LOWORD(v12) = v27;
    LOWORD(v15) = v25;
  }
  else
  {
    v14 = SHIWORD(result);
    v15 = HIWORD(result);
  }
  *(_QWORD *)((char *)a2 + 36) = v32;
  *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)v5;
  if ( (int)(v32 >> 16) >> 16 <= (__int16)v15 )
  {
    v21 = (__int16)v13;
    v22 = (__int16)v12;
    v23 = (__int16)v8;
    do
    {
      v24 = v33;
      if ( v33 <= (int)v32 >> 16 )
      {
        do
        {
          if ( (int)v11 < v21 || (int)v10 > v21 || v24 < v7 || v24 > v23 )
            result = Caver::SceneGridCell::AddEntry(
                       (Caver::SceneGridCell *)(*((_QWORD *)this + 6) + 16LL * (v24 + v21 * *((_DWORD *)this + 10))),
                       a2);
          v20 = v24++ < v22;
        }
        while ( v20 );
      }
      v20 = v21++ < v14;
    }
    while ( v20 );
  }
  return result;
}

