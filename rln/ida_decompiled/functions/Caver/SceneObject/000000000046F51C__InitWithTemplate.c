/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046F51C
 * Mangled: _ZN5Caver11SceneObject16InitWithTemplateERKN5boost13intrusive_ptrINS_14ObjectTemplateEEE
 * Demangled: Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callers: 2
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x000000000046F1E4  Caver::SceneObject::RemoveFromAllGroups(bool)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 92
 *   insn=0x000000000046F530 string=0x000000000046F534 "U"
 *   insn=0x000000000046F540 string=0x000000000046F544 "("
 *   insn=0x000000000046F548 string=0x000000000046F54C "\t\t@"
 *   insn=0x000000000046F548 string=0x000000000046F558 "`&@"
 *   insn=0x000000000046F54C string=0x000000000046F550 ")"
 *   insn=0x000000000046F550 string=0x000000000046F554 "\t\t"
 *   insn=0x000000000046F558 string=0x000000000046F55C "h&"
 *   insn=0x000000000046F55C string=0x000000000046F560 " "
 *   insn=0x000000000046F560 string=0x000000000046F564 "\t@"
 *   insn=0x000000000046F564 string=0x000000000046F568 ")"
 *   insn=0x000000000046F568 string=0x000000000046F56C "\t"
 *   insn=0x000000000046F570 string=0x000000000046F574 ""
 *   insn=0x000000000046F574 string=0x000000000046F578 ""
 *   insn=0x000000000046F57C string=0x000000000046F580 "h&@"
 *   insn=0x000000000046F588 string=0x000000000046F58C "@"
 *   insn=0x000000000046F58C string=0x000000000046F734 "`"
 *   insn=0x000000000046F594 string=0x000000000046F598 "%"
 *   insn=0x000000000046F5A0 string=0x000000000046F5A4 "@"
 *   insn=0x000000000046F5A4 string=0x000000000046F5A8 "\n @"
 *   insn=0x000000000046F5A4 string=0x000000000046F5CC ""
 *   insn=0x000000000046F5A8 string=0x000000000046F5AC ""
 *   insn=0x000000000046F5AC string=0x000000000046F5B0 "l!@"
 *   insn=0x000000000046F5B8 string=0x000000000046F5BC "?"
 *   insn=0x000000000046F5BC string=0x000000000046F5C0 "a"
 *   insn=0x000000000046F5CC string=0x000000000046F5D0 "\t@"
 *   insn=0x000000000046F5D8 string=0x000000000046F5DC "h"
 *   insn=0x000000000046F5DC string=0x000000000046F5E0 "%@"
 *   insn=0x000000000046F5E8 string=0x000000000046F5EC "\t@"
 *   insn=0x000000000046F5EC string=0x000000000046F5F0 ")"
 *   insn=0x000000000046F5F0 string=0x000000000046F5F4 "\t"
 *   insn=0x000000000046F608 string=0x000000000046F60C "@"
 *   insn=0x000000000046F60C string=0x000000000046F610 ""
 *   insn=0x000000000046F610 string=0x000000000046F614 ""
 *   insn=0x000000000046F614 string=0x000000000046F618 "!"
 *   insn=0x000000000046F618 string=0x000000000046F61C ""
 *   insn=0x000000000046F61C string=0x000000000046F620 ""
 *   insn=0x000000000046F62C string=0x000000000046F630 "$@"
 *   insn=0x000000000046F630 string=0x000000000046F634 "H"
 *   insn=0x000000000046F634 string=0x000000000046F59C "h&L"
 *   insn=0x000000000046F640 string=0x000000000046F644 "A"
 *   insn=0x000000000046F644 string=0x000000000046F648 "w"
 *   insn=0x000000000046F648 string=0x000000000046F64C "h&@"
 *   insn=0x000000000046F660 string=0x000000000046F664 "$@"
 *   insn=0x000000000046F664 string=0x000000000046F668 ""
 *   insn=0x000000000046F668 string=0x000000000046F66C "i*L"
 *   insn=0x000000000046F66C string=0x000000000046F670 "?"
 *   insn=0x000000000046F674 string=0x000000000046F678 "4"
 *   insn=0x000000000046F684 string=0x000000000046F688 "_"
 *   insn=0x000000000046F688 string=0x000000000046F68C "a"
 *   insn=0x000000000046F68C string=0x000000000046F690 "&"
 *   insn=0x000000000046F69C string=0x000000000046F6A0 ""
 *   insn=0x000000000046F6A4 string=0x000000000046F6A8 ")"
 *   insn=0x000000000046F6A8 string=0x000000000046F6AC ""
 *   insn=0x000000000046F6A8 string=0x000000000046F70C ""
 *   insn=0x000000000046F6AC string=0x000000000046F6B0 "\t@"
 *   insn=0x000000000046F6B8 string=0x000000000046F6BC "h"
 *   insn=0x000000000046F6BC string=0x000000000046F6C0 "%@"
 *   insn=0x000000000046F6C8 string=0x000000000046F6CC "\t@"
 *   insn=0x000000000046F6CC string=0x000000000046F6D0 ")"
 *   insn=0x000000000046F6D0 string=0x000000000046F6D4 "\t"
 *   insn=0x000000000046F6E8 string=0x000000000046F6EC "@"
 *   insn=0x000000000046F6EC string=0x000000000046F6F0 ""
 *   insn=0x000000000046F6F0 string=0x000000000046F6F4 ""
 *   insn=0x000000000046F6F8 string=0x000000000046F6FC ""
 *   insn=0x000000000046F6FC string=0x000000000046F700 ""
 *   insn=0x000000000046F71C string=0x000000000046F720 ""
 *   insn=0x000000000046F738 string=0x000000000046F73C "\t@"
 *   insn=0x000000000046F768 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046F774 string=0x000000000046F778 "\t\t@"
 *   insn=0x000000000046F778 string=0x000000000046F77C ")"
 *   insn=0x000000000046F77C string=0x000000000046F780 "\t\t"
 *   insn=0x000000000046F784 string=0x000000000046F788 "\t"
 *   insn=0x000000000046F788 string=0x000000000046F78C ")"
 *   insn=0x000000000046F790 string=0x000000000046F794 " "
 *   insn=0x000000000046F7A4 string=0x000000000046F7A8 ""
 *   insn=0x000000000046F7AC string=0x000000000046F7B0 "A"
 *   insn=0x000000000046F7B4 string=0x000000000046F7B8 ""
 *   insn=0x000000000046F7C0 string=0x000000000046F7C4 ""
 *   insn=0x000000000046F7D0 string=0x000000000046F7D4 "("
 *   insn=0x000000000046F7D4 string=0x000000000046F7D8 "\t\t@"
 *   insn=0x000000000046F7D8 string=0x000000000046F7DC ")"
 *   insn=0x000000000046F7DC string=0x000000000046F7E0 "\t\t"
 *   insn=0x000000000046F7E4 string=0x000000000046F7E8 "\t"
 *   insn=0x000000000046F7E8 string=0x000000000046F7EC ")"
 *   insn=0x000000000046F7F0 string=0x000000000046F7F4 " "
 *   insn=0x000000000046F7F8 string=0x000000000046F7FC "2H"
 *   insn=0x000000000046F800 string=0x000000000046F804 "$L"
 *   insn=0x000000000046F808 string=0x000000000046F80C " "
 *   insn=0x000000000046F810 string=0x000000000046F814 "\n @"
 *   insn=0x000000000046F814 string=0x000000000046F818 "_"
 *   insn=0x000000000046F81C string=0x000000000046F820 "?"
 *   insn=0x000000000046F820 string=0x000000000046F824 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::InitWithTemplate(Caver::SceneObject *this, __int64 *a2)
{
  __int64 v3; // x8
  _DWORD *v4; // x0
  int v5; // w9
  __int64 v6; // x20
  __int64 v7; // x22
  char v8; // w23
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 v11; // x11
  __int64 v12; // t1
  __int64 v13; // x0
  void (__fastcall *v14)(Caver::SceneObject *, _QWORD *); // x8
  __int64 v15; // x0
  int v16; // w8
  _DWORD *v17; // x0
  __int64 v18; // x8
  __int64 *v19; // x22
  __int64 *i; // x23
  __int64 v21; // x0
  int v22; // w8
  __int64 *v23; // x9
  __int64 *v24; // x10
  __int64 v25; // x20
  __int64 v26; // t1
  int v27; // w9
  int v28; // w8
  __int64 v29; // x0
  void (__fastcall *v30)(Caver::SceneObject *, _QWORD *); // x8
  __int64 v31; // x0
  int v32; // w8
  int v33; // w8
  _QWORD v34[2]; // [xsp+0h] [xbp-40h] BYREF

  v34[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v3 + 8);
  v4 = (_DWORD *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v3;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = *((_QWORD *)this + 9);
    }
  }
  v6 = *(_QWORD *)(v3 + 192);
  v7 = *(_QWORD *)(v3 + 200);
  if ( v6 != v7 )
  {
    v8 = 0;
    do
    {
      v17 = *(_DWORD **)v6;
      if ( *(_DWORD *)(*(_QWORD *)v6 + 36LL) )
      {
        v8 = 1;
      }
      else
      {
        v9 = (__int64 *)*((_QWORD *)this + 24);
        v10 = (__int64 *)*((_QWORD *)this + 25);
        if ( v9 == v10 )
          goto LABEL_13;
        while ( 1 )
        {
          v12 = *v9++;
          v11 = v12;
          if ( *(_DWORD *)(v12 + 32) == v17[8] )
            break;
          if ( v10 == v9 )
            goto LABEL_13;
        }
        if ( !v11 )
        {
LABEL_13:
          v13 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
          *(_BYTE *)(v13 + 48) = 1;
          v14 = *(void (__fastcall **)(Caver::SceneObject *, _QWORD *))(*(_QWORD *)this + 72LL);
          v34[0] = v13;
          if ( v13 )
            ++*(_DWORD *)(v13 + 8);
          v14(this, v34);
          v15 = v34[0];
          if ( v34[0] )
          {
            v16 = *(_DWORD *)(v34[0] + 8LL) - 1;
            *(_DWORD *)(v34[0] + 8LL) = v16;
            if ( !v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
      }
      v6 += 8;
    }
    while ( v6 != v7 );
    if ( (v8 & 1) != 0 )
    {
      v18 = *((_QWORD *)this + 9);
      v19 = *(__int64 **)(v18 + 192);
      for ( i = *(__int64 **)(v18 + 200); v19 != i; ++v19 )
      {
        v21 = *v19;
        v22 = *(_DWORD *)(*v19 + 36);
        if ( v22 )
        {
          v23 = (__int64 *)*((_QWORD *)this + 24);
          v24 = (__int64 *)*((_QWORD *)this + 25);
          if ( v23 != v24 )
          {
            while ( 1 )
            {
              v26 = *v23++;
              v25 = v26;
              if ( *(_DWORD *)(v26 + 32) == v22 )
                break;
              if ( v24 == v23 )
                goto LABEL_38;
            }
            if ( v25 )
            {
              v27 = *(unsigned __int8 *)(v25 + 48);
              v28 = *(_DWORD *)(v25 + 8) + 1;
              *(_DWORD *)(v25 + 8) = v28;
              if ( v27 )
              {
                v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                *(_BYTE *)(v29 + 48) = 1;
                v30 = *(void (__fastcall **)(Caver::SceneObject *, _QWORD *))(*(_QWORD *)this + 72LL);
                v34[0] = v29;
                if ( v29 )
                  ++*(_DWORD *)(v29 + 8);
                v30(this, v34);
                v31 = v34[0];
                if ( v34[0] )
                {
                  v32 = *(_DWORD *)(v34[0] + 8LL) - 1;
                  *(_DWORD *)(v34[0] + 8LL) = v32;
                  if ( !v32 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
                }
                v28 = *(_DWORD *)(v25 + 8);
              }
              v33 = v28 - 1;
              *(_DWORD *)(v25 + 8) = v33;
              if ( !v33 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
            }
          }
        }
LABEL_38:
        ;
      }
    }
  }
  Caver::SceneObject::SetInstanceScaling(this, *((float *)this + 34));
}

