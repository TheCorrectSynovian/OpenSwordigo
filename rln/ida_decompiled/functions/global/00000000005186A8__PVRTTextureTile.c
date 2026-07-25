/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005186A8
 * Mangled: _Z15PVRTTextureTilePP18PVR_Texture_HeaderPKS_i
 * Demangled: PVRTTextureTile(PVR_Texture_Header **,PVR_Texture_Header const*,int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FDB40  PVRTTextureCreate(uint,uint,uint,uint,uint,bool)
 *   0x00000000001FDE00  PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *
 * Referenced strings: 34
 *   insn=0x00000000005186D0 string=0x00000000005186D4 "E"
 *   insn=0x00000000005186DC string=0x00000000005186E0 ")"
 *   insn=0x00000000005186E0 string=0x00000000005186E4 "*"
 *   insn=0x00000000005186E4 string=0x00000000005186E8 "+"
 *   insn=0x00000000005186E8 string=0x00000000005186EC ""
 *   insn=0x00000000005186EC string=0x00000000005186F0 ")A"
 *   insn=0x00000000005186F0 string=0x00000000005186F4 "J"
 *   insn=0x00000000005186F4 string=0x00000000005186F8 "k"
 *   insn=0x00000000005186F8 string=0x00000000005186FC "7ih"
 *   insn=0x00000000005186FC string=0x0000000000518700 "Vih"
 *   insn=0x0000000000518700 string=0x0000000000518704 "sih"
 *   insn=0x0000000000518738 string=0x00000000001FDB40 "0'"
 *   insn=0x0000000000518760 string=0x0000000000518764 "0"
 *   insn=0x000000000051876C string=0x0000000000518770 "}"
 *   insn=0x0000000000518778 string=0x000000000051877C "}"
 *   insn=0x0000000000518780 string=0x0000000000518784 "'"
 *   insn=0x00000000005187B4 string=0x00000000005187B8 "%"
 *   insn=0x00000000005187BC string=0x00000000005187C0 "i"
 *   insn=0x00000000005187D0 string=0x00000000005187D4 "%"
 *   insn=0x00000000005187D8 string=0x00000000005187DC "i"
 *   insn=0x00000000005187F8 string=0x00000000005187FC "%\tS"
 *   insn=0x000000000051880C string=0x0000000000518810 "|"
 *   insn=0x0000000000518810 string=0x0000000000518814 "\t"
 *   insn=0x0000000000518810 string=0x00000000001FDE00 "0'"
 *   insn=0x0000000000518814 string=0x0000000000518818 ")}"
 *   insn=0x0000000000518828 string=0x000000000051882C "}"
 *   insn=0x000000000051882C string=0x0000000000518830 "J!"
 *   insn=0x0000000000518830 string=0x0000000000518834 "Z"
 *   insn=0x0000000000518834 string=0x0000000000518838 "_"
 *   insn=0x0000000000518838 string=0x000000000051883C "9"
 *   insn=0x000000000051883C string=0x0000000000518840 "#"
 *   insn=0x0000000000518844 string=0x0000000000518848 "8"
 *   insn=0x0000000000518848 string=0x000000000051884C "5"
 *   insn=0x000000000051884C string=0x0000000000518850 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTTextureTile(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v4; // w8
  __int64 v5; // x8
  unsigned int v6; // w23
  unsigned int v7; // w22
  unsigned int v8; // w19
  unsigned int v9; // w24
  __int64 result; // x0
  int v11; // w21
  const unsigned __int8 *v12; // x25
  unsigned __int8 *v13; // x26
  unsigned int v14; // w27
  unsigned int v15; // w8
  unsigned int v16; // w28
  unsigned int v17; // w19
  unsigned int v18; // w8
  unsigned int v19; // w24
  unsigned int v20; // w8
  unsigned int v21; // w23
  int v22; // w9
  _DWORD *v23; // [xsp+8h] [xbp-68h]
  unsigned int v25; // [xsp+18h] [xbp-58h]
  unsigned int v26; // [xsp+1Ch] [xbp-54h]

  v4 = *(unsigned __int8 *)(a2 + 16) - 17;
  if ( v4 > 8 )
  {
    v6 = 0;
    v7 = 0;
    v8 = -1;
  }
  else
  {
    v5 = 4LL * (char)v4;
    v6 = *(_DWORD *)((char *)&unk_59C010 + v5);
    v7 = *(_DWORD *)((char *)&unk_59C040 + v5);
    v8 = *(_DWORD *)((char *)&unk_59C070 + v5);
  }
  v9 = *(_DWORD *)(a2 + 8) * a3;
  result = PVRTTextureCreate(v9, v9, v6, v7, v8, 1);
  v11 = 0;
  v23 = (_DWORD *)result;
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_OWORD *)(result + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(result + 32) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  if ( v9 >= 2 )
  {
    v12 = (const unsigned __int8 *)(a2 + 52);
    v13 = (unsigned __int8 *)(result + 52);
    v14 = (v7 * v6 * v8) >> 3;
    v25 = v9;
    v26 = v6;
    do
    {
      v15 = v9 >> v11;
      if ( v6 <= v9 >> v11 )
      {
        v16 = v15 / v6;
        if ( v7 > v15 )
        {
LABEL_10:
          v17 = 1;
          goto LABEL_11;
        }
      }
      else
      {
        v16 = 1;
        if ( v7 > v15 )
          goto LABEL_10;
      }
      v17 = v15 / v7;
LABEL_11:
      v18 = *(_DWORD *)(a2 + 8) >> v11;
      if ( v6 <= v18 )
        v19 = v18 / v6;
      else
        v19 = 1;
      v20 = *(_DWORD *)(a2 + 4) >> v11;
      if ( v7 <= v20 )
        v21 = v20 / v7;
      else
        v21 = 1;
      result = PVRTTextureLoadTiled(v13, v16, v17, v12, v19, v21, v14, (*(_DWORD *)(a2 + 16) & 0x200) != 0);
      v22 = v19 * v14 * v21;
      v9 = v25;
      v6 = v26;
      ++v11;
      v13 += (int)(v16 * v14 * v17);
      v12 += v22;
    }
    while ( 1 << v11 < v25 );
  }
  v23[1] = v9;
  v23[2] = v9;
  v23[3] = v11;
  *a1 = v23;
  return result;
}

