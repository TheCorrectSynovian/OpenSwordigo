/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D144
 * Mangled: _ZN5Caver10FastVectorIN5boost10shared_ptrINS_14SceneGridLayerEEEE6ResizeEi
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001FFD00  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBC40  .memset
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 95
 *   insn=0x000000000046D15C string=0x000000000046D160 "y"
 *   insn=0x000000000046D164 string=0x000000000046D168 "?"
 *   insn=0x000000000046D168 string=0x000000000046D16C "m"
 *   insn=0x000000000046D170 string=0x000000000046D174 "t"
 *   insn=0x000000000046D178 string=0x000000000046D17C "h"
 *   insn=0x000000000046D178 string=0x000000000046D2E8 "v"
 *   insn=0x000000000046D18C string=0x000000000046D190 ""
 *   insn=0x000000000046D1A4 string=0x000000000046D1A8 ""
 *   insn=0x000000000046D1AC string=0x000000000046D1B0 " "
 *   insn=0x000000000046D1B4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000046D1D0 string=0x000000000046D1D4 "x"
 *   insn=0x000000000046D1D0 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000046D1D4 string=0x000000000046D1D8 "8"
 *   insn=0x000000000046D1D8 string=0x000000000046D1DC "?"
 *   insn=0x000000000046D1D8 string=0x000000000046D2DC "t"
 *   insn=0x000000000046D1E8 string=0x000000000046D1EC "\t"
 *   insn=0x000000000046D1EC string=0x000000000046D1F0 ")!@"
 *   insn=0x000000000046D1F4 string=0x000000000046D1F8 "\n"
 *   insn=0x000000000046D1F8 string=0x000000000046D1FC "J"
 *   insn=0x000000000046D1FC string=0x000000000046D200 "\n"
 *   insn=0x000000000046D204 string=0x000000000046D208 "W\t@"
 *   insn=0x000000000046D208 string=0x000000000046D20C "I"
 *   insn=0x000000000046D20C string=0x000000000046D210 "7"
 *   insn=0x000000000046D210 string=0x000000000046D254 "h"
 *   insn=0x000000000046D214 string=0x000000000046D218 ""
 *   insn=0x000000000046D228 string=0x000000000046D22C "\t@"
 *   insn=0x000000000046D234 string=0x000000000046D238 ""
 *   insn=0x000000000046D248 string=0x000000000046D24C "@"
 *   insn=0x000000000046D254 string=0x000000000046D258 "x"
 *   insn=0x000000000046D258 string=0x000000000046D25C "Z"
 *   insn=0x000000000046D25C string=0x000000000046D260 "9C"
 *   insn=0x000000000046D260 string=0x000000000046D264 "_"
 *   insn=0x000000000046D264 string=0x000000000046D268 "+"
 *   insn=0x000000000046D27C string=0x000000000046D280 ""
 *   insn=0x000000000046D284 string=0x000000000046D288 "7"
 *   insn=0x000000000046D288 string=0x000000000046D2CC "9C"
 *   insn=0x000000000046D28C string=0x000000000046D290 ""
 *   insn=0x000000000046D29C string=0x000000000046D2A0 "\t@"
 *   insn=0x000000000046D2AC string=0x000000000046D2B0 ""
 *   insn=0x000000000046D2BC string=0x000000000046D2C0 "@"
 *   insn=0x000000000046D2D4 string=0x000000000046D2D8 """
 *   insn=0x000000000046D2D8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046D2DC string=0x000000000046D2E0 "u"
 *   insn=0x000000000046D2E0 string=0x000000000046D2E4 " "
 *   insn=0x000000000046D304 string=0x000000000046D308 "5"
 *   insn=0x000000000046D30C string=0x000000000046D310 ""
 *   insn=0x000000000046D31C string=0x000000000046D320 "\t@"
 *   insn=0x000000000046D32C string=0x000000000046D330 ""
 *   insn=0x000000000046D33C string=0x000000000046D340 "@"
 *   insn=0x000000000046D384 string=0x000000000046D388 ""
 *   insn=0x000000000046D38C string=0x000000000046D390 "4"
 *   insn=0x000000000046D390 string=0x000000000046D3D4 "9C"
 *   insn=0x000000000046D394 string=0x000000000046D398 ""
 *   insn=0x000000000046D3A4 string=0x000000000046D3A8 "\t@"
 *   insn=0x000000000046D3B4 string=0x000000000046D3B8 ""
 *   insn=0x000000000046D3C4 string=0x000000000046D3C8 "@"
 *   insn=0x000000000046D3D4 string=0x000000000046D3D8 "?C"
 *   insn=0x000000000046D3D8 string=0x000000000046D3DC "a"
 *   insn=0x000000000046D3FC string=0x000000000046D400 "5"
 *   insn=0x000000000046D404 string=0x000000000046D408 ""
 *   insn=0x000000000046D414 string=0x000000000046D418 "\t@"
 *   insn=0x000000000046D424 string=0x000000000046D428 ""
 *   insn=0x000000000046D434 string=0x000000000046D438 "@"
 *   insn=0x000000000046D448 string=0x000000000046D44C "a"
 *   insn=0x000000000046D474 string=0x000000000046D478 "v"
 *   insn=0x000000000046D480 string=0x000000000046D484 "m"
 *   insn=0x000000000046D488 string=0x000000000046D48C "t"
 *   insn=0x000000000046D490 string=0x000000000046D494 "h"
 *   insn=0x000000000046D490 string=0x000000000046D4E4 "`"
 *   insn=0x000000000046D4A4 string=0x000000000046D4A8 "}"
 *   insn=0x000000000046D4B0 string=0x000000000046D4B4 " "
 *   insn=0x000000000046D4B4 string=0x000000000046D4B8 ".,"
 *   insn=0x000000000046D4B8 string=0x000000000046D4BC "h"
 *   insn=0x000000000046D4C0 string=0x000000000046D4C4 "h"
 *   insn=0x000000000046D4C4 string=0x000000000046D570 "t"
 *   insn=0x000000000046D4D4 string=0x000000000046D4D8 """
 *   insn=0x000000000046D4D8 string=0x000000000046D4FC "*"
 *   insn=0x000000000046D4E0 string=0x000000000046D550 "K"
 *   insn=0x000000000046D4E4 string=0x000000000046D4E8 "`"
 *   insn=0x000000000046D4F4 string=0x000000000046D4F8 " "
 *   insn=0x000000000046D4FC string=0x000000000046D500 ""
 *   insn=0x000000000046D508 string=0x000000000046D520 "*"
 *   insn=0x000000000046D50C string=0x000000000046D510 "_"
 *   insn=0x000000000046D510 string=0x000000000046D514 "i"
 *   insn=0x000000000046D518 string=0x000000000046D51C ""
 *   insn=0x000000000046D520 string=0x000000000046D524 "A"
 *   insn=0x000000000046D52C string=0x000000000046D530 "`"
 *   insn=0x000000000046D530 string=0x000000000046D534 "k"
 *   insn=0x000000000046D540 string=0x000000000046D544 "a"
 *   insn=0x000000000046D544 string=0x000000000046D548 "_"
 *   insn=0x000000000046D554 string=0x000000000046D558 "J"
 *   insn=0x000000000046D558 string=0x000000000046D55C "_"
 *   insn=0x000000000046D560 string=0x000000000046D564 "k"
 *   insn=0x000000000046D568 string=0x000000000046D56C "}"
 *   insn=0x000000000046D570 string=0x000000000046D574 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int *a1, int a2)
{
  int v3; // w25
  unsigned __int64 v5; // x23
  unsigned __int64 v6; // x0
  _QWORD *v7; // x22
  __int64 v8; // x24
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x8
  __int64 v12; // x9
  _QWORD *v13; // x10
  _QWORD *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x25
  _QWORD *v19; // x23
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x22
  __int64 v23; // x8
  __int64 v24; // x23
  _QWORD *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x8

  v3 = *a1;
  if ( *a1 > a2 )
  {
    v3 = a2;
    *a1 = a2;
  }
  if ( a2 )
  {
    if ( a1[1] != a2 )
    {
      v5 = 16LL * a2;
      if ( !is_mul_ok(a2, 0x10u) || v5 >= 0xFFFFFFFFFFFFFFF8LL )
        v6 = -1;
      else
        v6 = v5 + 8;
      v7 = (_QWORD *)operator new[](v6);
      *v7 = a2;
      memset(v7 + 1, 0, 16LL * a2);
      v8 = *((_QWORD *)a1 + 1);
      if ( v8 )
      {
        if ( v3 < 1 )
          goto LABEL_19;
        v9 = 0;
        v10 = 0;
        do
        {
          v12 = *(_QWORD *)(v8 + v9 * 8);
          v11 = *(_QWORD *)(v8 + v9 * 8 + 8);
          if ( v11 )
            ++*(_QWORD *)(v11 + 8);
          v13 = &v7[v9];
          v14 = (_QWORD *)v7[v9 + 2];
          v13[1] = v12;
          v13[2] = v11;
          if ( v14 )
          {
            v15 = v14[1] - 1LL;
            v14[1] = v15;
            if ( !v15 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
              v16 = v14[2] - 1LL;
              v14[2] = v16;
              if ( !v16 )
                (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
            }
          }
          v8 = *((_QWORD *)a1 + 1);
          ++v10;
          v9 += 2;
        }
        while ( v10 < *a1 );
        if ( v8 )
        {
LABEL_19:
          v17 = *(_QWORD *)(v8 - 8);
          if ( v17 )
          {
            v18 = 16 * v17;
            do
            {
              v19 = *(_QWORD **)(v8 + v18 - 8);
              if ( v19 )
              {
                v20 = v19[1] - 1LL;
                v19[1] = v20;
                if ( !v20 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
                  v21 = v19[2] - 1LL;
                  v19[2] = v21;
                  if ( !v21 )
                    (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
                }
              }
              v18 -= 16;
            }
            while ( v18 );
          }
          operator delete[]((void *)(v8 - 8));
        }
      }
      a1[1] = a2;
      *((_QWORD *)a1 + 1) = v7 + 1;
    }
  }
  else
  {
    v22 = *((_QWORD *)a1 + 1);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 - 8);
      if ( v23 )
      {
        v24 = 16 * v23;
        do
        {
          v25 = *(_QWORD **)(v22 + v24 - 8);
          if ( v25 )
          {
            v26 = v25[1] - 1LL;
            v25[1] = v26;
            if ( !v26 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
              v27 = v25[2] - 1LL;
              v25[2] = v27;
              if ( !v27 )
                (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
            }
          }
          v24 -= 16;
        }
        while ( v24 );
      }
      operator delete[]((void *)(v22 - 8));
      *((_QWORD *)a1 + 1) = 0;
    }
    a1[1] = 0;
  }
}

