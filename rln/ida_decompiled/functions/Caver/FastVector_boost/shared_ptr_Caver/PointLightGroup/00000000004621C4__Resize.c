/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004621C4
 * Mangled: _ZN5Caver10FastVectorIN5boost10shared_ptrINS_15PointLightGroupEEEE6ResizeEi
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000203600  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 78
 *   insn=0x00000000004621DC string=0x00000000004621E0 "y"
 *   insn=0x00000000004621E4 string=0x00000000004621E8 "?"
 *   insn=0x00000000004621E8 string=0x00000000004621EC "m"
 *   insn=0x00000000004621F0 string=0x00000000004621F4 "t"
 *   insn=0x00000000004621F8 string=0x00000000004621FC "h"
 *   insn=0x00000000004621F8 string=0x0000000000462368 "v"
 *   insn=0x000000000046220C string=0x0000000000462210 ""
 *   insn=0x0000000000462224 string=0x0000000000462228 ""
 *   insn=0x000000000046222C string=0x0000000000462230 " "
 *   insn=0x0000000000462234 string=0x00000000001F8570 "0'"
 *   insn=0x000000000046224C string=0x0000000000462250 "|f"
 *   insn=0x0000000000462250 string=0x0000000000462254 "x"
 *   insn=0x0000000000462250 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000462254 string=0x0000000000462258 "8"
 *   insn=0x0000000000462258 string=0x000000000046225C "?"
 *   insn=0x0000000000462258 string=0x000000000046235C "t"
 *   insn=0x0000000000462268 string=0x000000000046226C "\t"
 *   insn=0x000000000046226C string=0x0000000000462270 ")!@"
 *   insn=0x0000000000462274 string=0x0000000000462278 "\n"
 *   insn=0x0000000000462278 string=0x000000000046227C "J"
 *   insn=0x000000000046227C string=0x0000000000462280 "\n"
 *   insn=0x0000000000462284 string=0x0000000000462288 "W\t@"
 *   insn=0x0000000000462288 string=0x000000000046228C "I"
 *   insn=0x000000000046228C string=0x0000000000462290 "7"
 *   insn=0x0000000000462290 string=0x00000000004622D4 "h"
 *   insn=0x0000000000462294 string=0x0000000000462298 ""
 *   insn=0x00000000004622A8 string=0x00000000004622AC "\t@"
 *   insn=0x00000000004622B4 string=0x00000000004622B8 ""
 *   insn=0x00000000004622C8 string=0x00000000004622CC "@"
 *   insn=0x00000000004622D4 string=0x00000000004622D8 "x"
 *   insn=0x00000000004622D8 string=0x00000000004622DC "Z"
 *   insn=0x00000000004622DC string=0x00000000004622E0 "9C"
 *   insn=0x00000000004622E0 string=0x00000000004622E4 "_"
 *   insn=0x00000000004622E4 string=0x00000000004622E8 "+"
 *   insn=0x00000000004622FC string=0x0000000000462300 ""
 *   insn=0x0000000000462304 string=0x0000000000462308 "7"
 *   insn=0x0000000000462308 string=0x000000000046234C "9C"
 *   insn=0x000000000046230C string=0x0000000000462310 ""
 *   insn=0x000000000046231C string=0x0000000000462320 "\t@"
 *   insn=0x000000000046232C string=0x0000000000462330 ""
 *   insn=0x000000000046233C string=0x0000000000462340 "@"
 *   insn=0x0000000000462358 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046235C string=0x0000000000462360 "u"
 *   insn=0x0000000000462360 string=0x0000000000462364 " "
 *   insn=0x0000000000462384 string=0x0000000000462388 "5"
 *   insn=0x000000000046238C string=0x0000000000462390 ""
 *   insn=0x000000000046239C string=0x00000000004623A0 "\t@"
 *   insn=0x00000000004623AC string=0x00000000004623B0 ""
 *   insn=0x00000000004623BC string=0x00000000004623C0 "@"
 *   insn=0x0000000000462404 string=0x0000000000462408 ""
 *   insn=0x000000000046240C string=0x0000000000462410 "4"
 *   insn=0x0000000000462410 string=0x0000000000462454 "9C"
 *   insn=0x0000000000462414 string=0x0000000000462418 ""
 *   insn=0x0000000000462424 string=0x0000000000462428 "\t@"
 *   insn=0x0000000000462434 string=0x0000000000462438 ""
 *   insn=0x0000000000462444 string=0x0000000000462448 "@"
 *   insn=0x0000000000462454 string=0x0000000000462458 "?C"
 *   insn=0x0000000000462458 string=0x000000000046245C "a"
 *   insn=0x000000000046247C string=0x0000000000462480 "5"
 *   insn=0x0000000000462484 string=0x0000000000462488 ""
 *   insn=0x0000000000462494 string=0x0000000000462498 "\t@"
 *   insn=0x00000000004624A4 string=0x00000000004624A8 ""
 *   insn=0x00000000004624B4 string=0x00000000004624B8 "@"
 *   insn=0x00000000004624C8 string=0x00000000004624CC "a"
 *   insn=0x00000000004624FC string=0x0000000000462500 "8L"
 *   insn=0x0000000000462500 string=0x0000000000462504 ")"
 *   insn=0x0000000000462500 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000462504 string=0x0000000000462508 "))A"
 *   insn=0x0000000000462514 string=0x0000000000462518 "(A"
 *   insn=0x000000000046251C string=0x0000000000462520 ""
 *   insn=0x0000000000462534 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000462538 string=0x000000000046253C "`"
 *   insn=0x000000000046253C string=0x0000000000462540 "@"
 *   insn=0x0000000000462548 string=0x000000000046254C "YS"
 *   insn=0x000000000046254C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000462558 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000462560 string=0x0000000000462564 "z"
 *   insn=0x0000000000462564 string=0x0000000000462568 "RS"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int *a1, int a2)
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

