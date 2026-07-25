/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050E220
 * Mangled: _Z24PVRTModelPODToggleStripsR8SPODMesh
 * Demangled: PVRTModelPODToggleStrips(SPODMesh &)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5370  PVRTVertexWrite(void *,EPVRTDataType,uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6770  .calloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FA910  PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *   0x00000000002008E0  .realloc
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 114
 *   insn=0x000000000050E23C string=0x000000000050E240 "T"
 *   insn=0x000000000050E25C string=0x000000000050E260 "h"
 *   insn=0x000000000050E268 string=0x000000000050E26C ""
 *   insn=0x000000000050E274 string=0x000000000050E278 "i"
 *   insn=0x000000000050E278 string=0x000000000050E280 "*y"
 *   insn=0x000000000050E288 string=0x000000000050E28C "I"
 *   insn=0x000000000050E28C string=0x000000000050E290 " "
 *   insn=0x000000000050E290 string=0x000000000050E2D0 "i"
 *   insn=0x000000000050E2A8 string=0x000000000050E2AC ""
 *   insn=0x000000000050E2B0 string=0x000000000050E2B4 "("
 *   insn=0x000000000050E2B4 string=0x000000000050E2B8 "i"
 *   insn=0x000000000050E2B8 string=0x000000000050E2C0 "(y"
 *   insn=0x000000000050E2B8 string=0x000000000059B428 "h2"
 *   insn=0x000000000050E2C0 string=0x000000000050E2C4 ""
 *   insn=0x000000000050E2D0 string=0x000000000050E2D4 "z"
 *   insn=0x000000000050E2E8 string=0x000000000050E2F8 "h2@"
 *   insn=0x000000000050E2EC string=0x000000000050E2F0 " "
 *   insn=0x000000000050E2F0 string=0x000000000050E2F4 "`"
 *   insn=0x000000000050E2F0 string=0x00000000001F6770 "0'"
 *   insn=0x000000000050E2FC string=0x000000000050E300 "`"
 *   insn=0x000000000050E30C string=0x000000000050E310 "\txu"
 *   insn=0x000000000050E318 string=0x000000000050E31C "h"
 *   insn=0x000000000050E328 string=0x000000000050E32C ""
 *   insn=0x000000000050E334 string=0x000000000050E338 "\n"
 *   insn=0x000000000050E338 string=0x000000000050E33C "h"
 *   insn=0x000000000050E340 string=0x000000000050E344 "\n"
 *   insn=0x000000000050E354 string=0x000000000050E358 "h"
 *   insn=0x000000000050E378 string=0x000000000050E390 "`"
 *   insn=0x000000000050E390 string=0x000000000050E394 "9"
 *   insn=0x000000000050E39C string=0x000000000050E3A0 "\txu"
 *   insn=0x000000000050E3A0 string=0x000000000050E3A4 "?"
 *   insn=0x000000000050E3A8 string=0x000000000050E3AC "h2@"
 *   insn=0x000000000050E3B8 string=0x000000000050E3BC "`"
 *   insn=0x000000000050E3C0 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050E3CC string=0x000000000050E3D0 "z"
 *   insn=0x000000000050E414 string=0x000000000050E418 "h"
 *   insn=0x000000000050E418 string=0x000000000050E41C "`"
 *   insn=0x000000000050E424 string=0x000000000050E428 "\t"
 *   insn=0x000000000050E428 string=0x000000000050E42C "?"
 *   insn=0x000000000050E43C string=0x000000000050E440 ")}@"
 *   insn=0x000000000050E440 string=0x000000000050E444 "Ly"
 *   insn=0x000000000050E464 string=0x000000000050E468 "i"
 *   insn=0x000000000050E468 string=0x000000000050E46C "j"
 *   insn=0x000000000050E46C string=0x000000000050E470 "_"
 *   insn=0x000000000050E470 string=0x000000000050E474 "(\t\n"
 *   insn=0x000000000050E478 string=0x000000000050E47C ")yk"
 *   insn=0x000000000050E47C string=0x000000000050E480 ""
 *   insn=0x000000000050E484 string=0x000000000050E488 ""
 *   insn=0x000000000050E488 string=0x000000000050E48C "J}\t"
 *   insn=0x000000000050E48C string=0x000000000050E490 ""
 *   insn=0x000000000050E490 string=0x000000000050E494 "U"
 *   insn=0x000000000050E498 string=0x000000000050E49C "b"
 *   insn=0x000000000050E4A4 string=0x000000000050E4A8 ""
 *   insn=0x000000000050E4C4 string=0x000000000050E4C8 ""
 *   insn=0x000000000050E4D8 string=0x000000000050E4DC "{"
 *   insn=0x000000000050E4F0 string=0x000000000050E4F4 ""
 *   insn=0x000000000050E4F4 string=0x00000000001FA910 "0'"
 *   insn=0x000000000050E500 string=0x000000000050E504 ""
 *   insn=0x000000000050E518 string=0x000000000050E51C ""
 *   insn=0x000000000050E524 string=0x000000000050E528 "i"
 *   insn=0x000000000050E528 string=0x000000000050E52C "h2@"
 *   insn=0x000000000050E52C string=0x000000000050E530 "*yh"
 *   insn=0x000000000050E530 string=0x000000000050E534 "*"
 *   insn=0x000000000050E538 string=0x000000000050E53C "*"
 *   insn=0x000000000050E540 string=0x000000000050E544 "?"
 *   insn=0x000000000050E548 string=0x000000000050E598 ""
 *   insn=0x000000000050E54C string=0x000000000050E550 " "
 *   insn=0x000000000050E550 string=0x000000000050E574 "i"
 *   insn=0x000000000050E55C string=0x000000000050E5A0 "h"
 *   insn=0x000000000050E568 string=0x000000000050E56C "?"
 *   insn=0x000000000050E56C string=0x000000000050E570 "A"
 *   insn=0x000000000050E574 string=0x000000000050E578 "h"
 *   insn=0x000000000050E578 string=0x000000000050E57C "a"
 *   insn=0x000000000050E580 string=0x000000000050E584 ")}"
 *   insn=0x000000000050E588 string=0x000000000050E58C "y"
 *   insn=0x000000000050E58C string=0x00000000001F5370 "P'"
 *   insn=0x000000000050E594 string=0x000000000050E5FC "i2@"
 *   insn=0x000000000050E598 string=0x000000000050E59C "h2"
 *   insn=0x000000000050E5A0 string=0x000000000050E5A4 "i"
 *   insn=0x000000000050E5A4 string=0x000000000050E5A8 "a"
 *   insn=0x000000000050E5A8 string=0x000000000050E5AC "}"
 *   insn=0x000000000050E5AC string=0x000000000050E5B0 " "
 *   insn=0x000000000050E5B0 string=0x000000000050E5B4 "o"
 *   insn=0x000000000050E5B4 string=0x000000000050E5B8 "i"
 *   insn=0x000000000050E5B8 string=0x000000000050E5BC "h"
 *   insn=0x000000000050E5BC string=0x000000000050E5C0 "a"
 *   insn=0x000000000050E5C8 string=0x000000000050E5CC ")}\n"
 *   insn=0x000000000050E5D0 string=0x000000000050E5D4 "g"
 *   insn=0x000000000050E5D4 string=0x000000000050E5D8 "i"
 *   insn=0x000000000050E5D8 string=0x000000000050E5DC "h"
 *   insn=0x000000000050E5DC string=0x000000000050E5E0 "a"
 *   insn=0x000000000050E5E8 string=0x000000000050E5EC ")}\n"
 *   insn=0x000000000050E5F0 string=0x000000000050E5F4 "_"
 *   insn=0x000000000050E5FC string=0x000000000050E600 "`"
 *   insn=0x000000000050E604 string=0x000000000050E608 ")"
 *   insn=0x000000000050E608 string=0x000000000050E60C "\nhi"
 *   insn=0x000000000050E60C string=0x000000000050E610 "H"
 *   insn=0x000000000050E610 string=0x000000000050E614 "h)"
 *   insn=0x000000000050E624 string=0x000000000050E628 "k"
 *   insn=0x000000000050E62C string=0x000000000050E630 "K"
 *   insn=0x000000000050E630 string=0x000000000050E634 "h2@"
 *   insn=0x000000000050E630 string=0x000000000050E458 "h"
 *   insn=0x000000000050E634 string=0x000000000050E638 "\txh"
 *   insn=0x000000000050E63C string=0x000000000050E640 ""
 *   insn=0x000000000050E63C string=0x000000000050E650 "`"
 *   insn=0x000000000050E640 string=0x000000000050E644 "h2"
 *   insn=0x000000000050E65C string=0x000000000050E660 "i2@"
 *   insn=0x000000000050E660 string=0x000000000050E664 "h"
 *   insn=0x000000000050E664 string=0x000000000050E668 "`"
 *   insn=0x000000000050E668 string=0x000000000050E66C "!"
 *   insn=0x000000000050E674 string=0x000000000050E678 "`"
 *   insn=0x000000000050E680 string=0x000000000050E684 "V"
 *   insn=0x000000000050E698 string=0x000000000050E69C ""
 *   insn=0x000000000050E6A0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTModelPODToggleStrips(__int64 a1)
{
  size_t v2; // x24
  __int64 v3; // x8
  size_t v4; // x20
  __int64 v5; // x9
  int v6; // w10
  char *v7; // x26
  size_t v8; // x23
  size_t v9; // x0
  unsigned int v10; // w8
  _DWORD *v11; // x0
  unsigned __int64 v12; // x21
  unsigned int v13; // w22
  unsigned int v14; // w24
  unsigned int v15; // w25
  void *v16; // x0
  int v17; // w8
  _DWORD *v18; // x0
  int v19; // w8
  int v20; // w9
  __int64 v21; // x11
  int v22; // w23
  __int64 v23; // x9
  bool v24; // cc
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int v27; // w8
  int v28; // w24
  __int64 i; // x27
  int v30; // w8
  __int64 v31; // x8
  void *v32; // x0
  __int64 v33; // x9
  void *v34; // x8
  char *v35; // [xsp+8h] [xbp-98h]
  __int64 v36; // [xsp+10h] [xbp-90h]
  unsigned int *v37; // [xsp+18h] [xbp-88h]
  __int64 v38; // [xsp+20h] [xbp-80h]
  int v39; // [xsp+34h] [xbp-6Ch]
  int v40; // [xsp+38h] [xbp-68h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(unsigned int *)(a1 + 4);
  v37 = (unsigned int *)(a1 + 4);
  if ( !(_DWORD)v2 )
    return;
  v40 = *(_DWORD *)(a1 + 16);
  v3 = 12;
  v4 = 4;
  switch ( v40 )
  {
    case 1:
    case 2:
      goto LABEL_8;
    case 3:
    case 11:
    case 12:
      v4 = 2;
      goto LABEL_6;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
LABEL_7:
      v3 = 12;
      goto LABEL_8;
    case 10:
    case 13:
    case 14:
      v4 = 1;
      goto LABEL_6;
    default:
      v4 = 0;
LABEL_6:
      switch ( v40 )
      {
        case 3:
        case 11:
        case 12:
          v3 = 6;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          goto LABEL_7;
        case 10:
        case 13:
        case 14:
          v3 = 3;
          break;
        default:
          v3 = 0;
          break;
      }
LABEL_8:
      v5 = *(unsigned int *)(a1 + 20);
      v6 = *(_DWORD *)(a1 + 24);
      v7 = *(char **)(a1 + 32);
      *(_QWORD *)(a1 + 32) = 0;
      v8 = v3 * v5;
      v9 = v3 * v5 * v2;
      v39 = v6;
      if ( v9 )
        *(_QWORD *)(a1 + 32) = calloc(v9, 1u);
      v10 = *(_DWORD *)(a1 + 48);
      if ( v10 )
      {
        v11 = *(_DWORD **)(a1 + 40);
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do
        {
          if ( v11[v12] )
          {
            v15 = 0;
            do
            {
              v16 = (void *)(*(_QWORD *)(a1 + 32) + v4 * v13);
              if ( v15 )
              {
                memcpy(v16, &v7[v4 * (v14 - 1)], v4);
                memcpy((void *)(*(_QWORD *)(a1 + 32) + v4 * (v13 + 1)), &v7[v4 * (v14 - 2)], v4);
                memcpy((void *)(*(_QWORD *)(a1 + 32) + v4 * (v13 + 2)), &v7[v4 * v14], v4);
                v17 = 1;
              }
              else
              {
                memcpy(v16, &v7[v4 * v14], v8);
                v17 = 3;
              }
              v11 = *(_DWORD **)(a1 + 40);
              ++v15;
              v14 += v17;
              v13 += 3;
            }
            while ( v15 < v11[v12] );
            v10 = *(_DWORD *)(a1 + 48);
          }
          ++v12;
        }
        while ( v12 < v10 );
        if ( v11 )
        {
          free(v11);
          *(_QWORD *)(a1 + 40) = 0;
        }
        *(_DWORD *)(a1 + 48) = 0;
        if ( !v7 )
          return;
LABEL_23:
        free(v7);
        return;
      }
      v18 = calloc(v2, 4u);
      v19 = *(_DWORD *)(a1 + 268);
      *(_QWORD *)(a1 + 40) = v18;
      *(_DWORD *)(a1 + 48) = 0;
      if ( v19 )
        v20 = v19;
      else
        v20 = 1;
      if ( v20 < 1 )
      {
        v22 = 0;
        goto LABEL_48;
      }
      v21 = 0;
      v22 = 0;
      v35 = v7;
      v36 = v20;
      break;
  }
  while ( 1 )
  {
    if ( !v19 )
    {
      v27 = *v37;
      if ( !*v37 )
        goto LABEL_44;
LABEL_37:
      v38 = v21;
      v28 = 0;
      for ( i = v27 - 1LL; ; --i )
      {
        PVRTVertexRead();
        PVRTVertexRead();
        PVRTVertexRead();
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4LL * *(unsigned int *)(a1 + 48)) )
        {
          PVRTVertexWrite();
          v30 = 1;
        }
        else
        {
          PVRTVertexWrite();
          PVRTVertexWrite();
          PVRTVertexWrite();
          v30 = 3;
        }
        v18 = *(_DWORD **)(a1 + 40);
        v22 += v30;
        ++v18[*(unsigned int *)(a1 + 48)];
        if ( !i )
          break;
        v28 += 3 * v39;
      }
      v7 = v35;
      v21 = v38;
      goto LABEL_44;
    }
    v23 = *(_QWORD *)(a1 + 256);
    v24 = v21 + 1 < v19;
    v25 = (unsigned int *)(v23 + 4 * (v21 + 1));
    v26 = *(_DWORD *)(v23 + 4 * v21);
    if ( !v24 )
      v25 = v37;
    v27 = *v25 - v26;
    if ( v27 )
      goto LABEL_37;
LABEL_44:
    if ( ++v21 >= v36 )
      break;
    v19 = *(_DWORD *)(a1 + 268);
  }
  v31 = *(unsigned int *)(a1 + 48);
  if ( v18[v31] )
    *(_DWORD *)(a1 + 48) = v31 + 1;
LABEL_48:
  v32 = realloc(*(void **)(a1 + 32), v4 * v22);
  v33 = *(unsigned int *)(a1 + 48);
  v34 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 32) = v32;
  *(_QWORD *)(a1 + 40) = realloc(v34, 4 * v33);
  if ( v7 )
    goto LABEL_23;
}

