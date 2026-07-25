/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047417C
 * Mangled: _ZN5Caver11SceneObject29RemoveComponentWithIdentifierEi
 * Demangled: Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *
 * Callers: 1
 *   0x00000000001F8800  Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *
 * Callees: 4
 *   0x00000000001F4550  Caver::FastVector<Caver::Component *>::Resize(int)
 *   0x00000000001F9FB0  Caver::SceneObject::UpdateBounds(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 120
 *   insn=0x000000000047419C string=0x00000000004741A0 " "
 *   insn=0x00000000004741A0 string=0x00000000004741A4 "6!"
 *   insn=0x00000000004741AC string=0x00000000004741B0 "i\n@"
 *   insn=0x00000000004741AC string=0x00000000004741BC "i"@"
 *   insn=0x00000000004741B0 string=0x00000000004741B4 ")"
 *   insn=0x00000000004741B4 string=0x00000000004741B8 "i\n"
 *   insn=0x00000000004741BC string=0x00000000004741C0 "?"
 *   insn=0x00000000004741C4 string=0x00000000004741C8 "i\n@"
 *   insn=0x00000000004741C4 string=0x00000000004741FC "h"
 *   insn=0x00000000004741C8 string=0x00000000004741CC ")"
 *   insn=0x00000000004741CC string=0x00000000004741D0 "i\n"
 *   insn=0x00000000004741D4 string=0x00000000004741D8 "h"
 *   insn=0x00000000004741DC string=0x00000000004741E0 ""
 *   insn=0x00000000004741F4 string=0x00000000004741F8 "c"
 *   insn=0x00000000004741FC string=0x0000000000474200 "]@"
 *   insn=0x0000000000474208 string=0x000000000047420C " "
 *   insn=0x000000000047421C string=0x0000000000474220 ""
 *   insn=0x0000000000474220 string=0x0000000000474224 "\n"
 *   insn=0x0000000000474228 string=0x000000000047422C "\t"
 *   insn=0x000000000047422C string=0x0000000000474230 "J!"
 *   insn=0x0000000000474240 string=0x0000000000474244 " "
 *   insn=0x0000000000474244 string=0x0000000000474248 ")"
 *   insn=0x0000000000474244 string=0x00000000004742A8 ""
 *   insn=0x0000000000474248 string=0x000000000047424C "?"
 *   insn=0x000000000047424C string=0x0000000000474250 "J!"
 *   insn=0x0000000000474264 string=0x0000000000474268 "\t"
 *   insn=0x0000000000474270 string=0x0000000000474274 ""
 *   insn=0x0000000000474274 string=0x0000000000474278 "Hy"
 *   insn=0x000000000047427C string=0x0000000000474280 "I"
 *   insn=0x000000000047428C string=0x00000000001F4550 "P'"
 *   insn=0x0000000000474294 string=0x0000000000474298 "*"
 *   insn=0x00000000004742B4 string=0x00000000004742B8 "\t"
 *   insn=0x00000000004742BC string=0x00000000004742C0 "?"
 *   insn=0x00000000004742C0 string=0x00000000004742C4 "+"
 *   insn=0x00000000004742C4 string=0x00000000004742C8 "("
 *   insn=0x00000000004742D8 string=0x00000000004742DC "\t\t@"
 *   insn=0x00000000004742DC string=0x00000000004742E0 ")"
 *   insn=0x00000000004742E0 string=0x00000000004742E4 "\t\t"
 *   insn=0x00000000004742F0 string=0x00000000004742F4 "@"
 *   insn=0x00000000004742F4 string=0x00000000004742F8 ""
 *   insn=0x00000000004742F8 string=0x00000000004742FC ""
 *   insn=0x0000000000474300 string=0x0000000000474304 ""
 *   insn=0x0000000000474304 string=0x0000000000474308 ""
 *   insn=0x0000000000474338 string=0x000000000047433C "@"
 *   insn=0x0000000000474338 string=0x0000000000474358 "h"
 *   insn=0x000000000047433C string=0x0000000000474340 ""
 *   insn=0x0000000000474340 string=0x0000000000474344 ""
 *   insn=0x0000000000474348 string=0x000000000047434C ""
 *   insn=0x000000000047434C string=0x0000000000474350 ""
 *   insn=0x0000000000474358 string=0x000000000047435C "m@"
 *   insn=0x0000000000474364 string=0x0000000000474368 "`"
 *   insn=0x0000000000474368 string=0x0000000000474374 "h\n@"
 *   insn=0x0000000000474370 string=0x00000000001F9FB0 "0'"
 *   insn=0x0000000000474374 string=0x0000000000474378 ""
 *   insn=0x0000000000474378 string=0x000000000047437C "h\n"
 *   insn=0x0000000000474380 string=0x0000000000474398 "h"
 *   insn=0x00000000004743B0 string=0x00000000004743B4 " "
 *   insn=0x00000000004743BC string=0x00000000004743D8 "h\n@"
 *   insn=0x00000000004743C8 string=0x00000000004743CC ""
 *   insn=0x00000000004743D0 string=0x00000000004743D4 "3"
 *   insn=0x00000000004743D8 string=0x00000000004743DC ""
 *   insn=0x00000000004743DC string=0x00000000004743E0 "h\n"
 *   insn=0x00000000004743E4 string=0x00000000004743E8 "h"
 *   insn=0x00000000004743E8 string=0x00000000004743EC ""
 *   insn=0x00000000004743F8 string=0x00000000004743FC "25"
 *   insn=0x000000000047441C string=0x0000000000474420 "x"L"
 *   insn=0x000000000047442C string=0x0000000000474430 "ub"
 *   insn=0x0000000000474430 string=0x0000000000474434 "V"
 *   insn=0x0000000000474440 string=0x0000000000474444 ""
 *   insn=0x0000000000474444 string=0x0000000000474448 "Q@"
 *   insn=0x000000000047444C string=0x0000000000474450 "@"
 *   insn=0x0000000000474454 string=0x0000000000474458 ""
 *   insn=0x0000000000474458 string=0x000000000047445C "]@"
 *   insn=0x0000000000474460 string=0x0000000000474464 " "
 *   insn=0x0000000000474470 string=0x0000000000474474 "k"
 *   insn=0x0000000000474474 string=0x0000000000474478 "\t"
 *   insn=0x0000000000474478 string=0x000000000047447C ""
 *   insn=0x0000000000474480 string=0x0000000000474484 "\n"
 *   insn=0x0000000000474484 string=0x0000000000474488 "k!"
 *   insn=0x0000000000474488 string=0x000000000047448C "mr@"
 *   insn=0x0000000000474494 string=0x0000000000474498 "?"
 *   insn=0x0000000000474498 string=0x000000000047449C " "
 *   insn=0x000000000047449C string=0x00000000004744A0 "J"
 *   insn=0x000000000047449C string=0x0000000000474500 ""
 *   insn=0x00000000004744A0 string=0x00000000004744A4 "_"
 *   insn=0x00000000004744A4 string=0x00000000004744A8 "k!"
 *   insn=0x00000000004744B4 string=0x00000000004744C4 "j"
 *   insn=0x00000000004744B8 string=0x00000000004744BC "?"
 *   insn=0x00000000004744BC string=0x00000000004745B8 "hf@"
 *   insn=0x00000000004744C4 string=0x00000000004744C8 "\t"
 *   insn=0x00000000004744C8 string=0x00000000004744CC "i"
 *   insn=0x00000000004744D4 string=0x00000000004744D8 "Hy"
 *   insn=0x00000000004744D4 string=0x00000000004744F0 "hr@"
 *   insn=0x00000000004744F4 string=0x00000000004744F8 "("
 *   insn=0x0000000000474508 string=0x000000000047450C "\t"
 *   insn=0x000000000047450C string=0x0000000000474510 "?"
 *   insn=0x0000000000474510 string=0x0000000000474514 "if@"
 *   insn=0x000000000047451C string=0x0000000000474520 "("
 *   insn=0x000000000047451C string=0x000000000047458C "\t!"
 *   insn=0x0000000000474524 string=0x0000000000474528 ""
 *   insn=0x0000000000474528 string=0x000000000047452C ""
 *   insn=0x0000000000474530 string=0x0000000000474534 "@"
 *   insn=0x0000000000474538 string=0x000000000047453C "\t\t@"
 *   insn=0x000000000047453C string=0x0000000000474540 ")"
 *   insn=0x0000000000474540 string=0x0000000000474544 "\t\t"
 *   insn=0x0000000000474548 string=0x000000000047454C ""
 *   insn=0x0000000000474550 string=0x0000000000474554 "@"
 *   insn=0x0000000000474550 string=0x0000000000474570 "9"
 *   insn=0x0000000000474554 string=0x0000000000474558 ""
 *   insn=0x0000000000474558 string=0x000000000047455C ""
 *   insn=0x0000000000474560 string=0x0000000000474564 ""
 *   insn=0x0000000000474564 string=0x0000000000474568 ""
 *   insn=0x0000000000474570 string=0x0000000000474574 "?"
 *   insn=0x000000000047457C string=0x0000000000474580 "hf@"
 *   insn=0x000000000047458C string=0x0000000000474590 "if"
 *   insn=0x0000000000474598 string=0x000000000047459C "@"
 *   insn=0x000000000047459C string=0x00000000004745A0 ""
 *   insn=0x00000000004745A0 string=0x00000000004745A4 ""
 *   insn=0x00000000004745A8 string=0x00000000004745AC ""
 *   insn=0x00000000004745AC string=0x00000000004745B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::RemoveComponentWithIdentifier(__int64 this, int a2)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 i; // x22
  __int64 v7; // x19
  int v8; // w9
  __int64 v10; // x8
  int *v11; // x21
  __int64 v12; // x11
  __int64 v13; // x9
  __int64 v14; // x10
  __int64 v15; // x12
  __int64 v16; // x23
  int v17; // w10
  int v18; // w9
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x21
  __int64 v22; // x22
  __int64 v23; // x8
  _DWORD *v24; // x0
  int v25; // w8
  _DWORD *v26; // x0
  int v27; // w8
  int v28; // w8

  v2 = this;
  v4 = *(_QWORD *)(this + 192);
  v3 = *(_QWORD *)(this + 200);
  if ( v3 != v4 )
  {
    for ( i = v4 + 8; ; i += 8 )
    {
      v7 = *(_QWORD *)(i - 8);
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      if ( *(_DWORD *)(v7 + 32) == a2 )
        break;
      v8 = *(_DWORD *)(v7 + 8) - 1;
      *(_DWORD *)(v7 + 8) = v8;
      if ( !v8 )
      {
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v3 = *(_QWORD *)(v2 + 200);
      }
      if ( i == v3 )
        return this;
    }
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7) & 1) != 0 )
    {
      v11 = (int *)(v2 + 216);
      v10 = *(int *)(v2 + 216);
      if ( (_DWORD)v10 )
      {
        if ( (int)v10 < 1 )
        {
          v16 = 0;
LABEL_19:
          v17 = *(_DWORD *)(v2 + 220);
          v18 = v10 - 1;
          *(_DWORD *)(v2 + 216) = v10 - 1;
          if ( (int)v10 > v17 )
          {
            Caver::FastVector<Caver::Component *>::Resize();
            v18 = *v11;
          }
          *(_QWORD *)(*(_QWORD *)(v2 + 224) + 8LL * v18) = v16;
          *v11 = v18 + 1;
        }
        else
        {
          v12 = 0;
          v13 = v10 + 1;
          v14 = 8 * v10 - 8;
          while ( 1 )
          {
            v15 = *(_QWORD *)(v2 + 224);
            v16 = *(_QWORD *)(v15 + v14);
            *(_QWORD *)(v15 + v14) = v12;
            if ( v16 == v7 )
              break;
            --v13;
            v14 -= 8;
            v12 = v16;
            if ( v13 <= 1 )
              goto LABEL_19;
          }
          *v11 = v10 - 1;
        }
      }
    }
    *(_QWORD *)(v7 + 40) = 0;
    v19 = *(_QWORD *)(v2 + 200);
    v20 = v19 - i;
    if ( v19 != i )
    {
      if ( v20 < 1 )
      {
        i = *(_QWORD *)(v2 + 200);
      }
      else
      {
        v21 = i - 8;
        v22 = ((unsigned __int64)v20 >> 3) + 1;
        do
        {
          v23 = *(_QWORD *)(v21 + 8);
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          v24 = *(_DWORD **)v21;
          *(_QWORD *)v21 = v23;
          if ( v24 )
          {
            v25 = v24[2] - 1;
            v24[2] = v25;
            if ( !v25 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 8LL))(v24);
          }
          --v22;
          v21 += 8;
        }
        while ( v22 > 1 );
        i = *(_QWORD *)(v2 + 200);
      }
    }
    *(_QWORD *)(v2 + 200) = i - 8;
    v26 = *(_DWORD **)(i - 8);
    if ( v26 )
    {
      v27 = v26[2] - 1;
      v26[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 8LL))(v26);
    }
    this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
    if ( (this & 1) != 0 )
      this = Caver::SceneObject::UpdateBounds((Caver::SceneObject *)v2);
    v28 = *(_DWORD *)(v7 + 8) - 1;
    *(_DWORD *)(v7 + 8) = v28;
    if ( !v28 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return this;
}

