/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473FB0
 * Mangled: _ZN5Caver11SceneObject12AddComponentERKN5boost13intrusive_ptrINS_9ComponentEEE
 * Demangled: Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 1
 *   0x00000000001F87F0  Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callees: 4
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *   0x00000000001F4550  Caver::FastVector<Caver::Component *>::Resize(int)
 *   0x00000000001F9FB0  Caver::SceneObject::UpdateBounds(void)
 *   0x0000000000200F20  Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 58
 *   insn=0x0000000000473FC8 string=0x0000000000473FCC "!@"
 *   insn=0x0000000000473FDC string=0x0000000000473FE0 "*"
 *   insn=0x0000000000473FE0 string=0x0000000000473FE4 ""
 *   insn=0x0000000000473FE4 string=0x0000000000474018 "L"
 *   insn=0x0000000000473FE8 string=0x0000000000473FEC "*"
 *   insn=0x0000000000473FF0 string=0x0000000000473FF4 "!"
 *   insn=0x0000000000473FF4 string=0x0000000000473FF8 "?"
 *   insn=0x0000000000473FFC string=0x0000000000474000 "L"
 *   insn=0x0000000000473FFC string=0x0000000000474010 "`"
 *   insn=0x0000000000474008 string=0x000000000047400C "k"
 *   insn=0x0000000000474010 string=0x0000000000474014 "!"
 *   insn=0x0000000000474024 string=0x0000000000474058 "_"
 *   insn=0x0000000000474030 string=0x0000000000474034 "."
 *   insn=0x0000000000474040 string=0x0000000000474044 "K"
 *   insn=0x0000000000474044 string=0x000000000047408C "K"
 *   insn=0x0000000000474050 string=0x0000000000474054 "\n"
 *   insn=0x0000000000474058 string=0x000000000047405C "!"
 *   insn=0x000000000047405C string=0x0000000000474060 "kj@"
 *   insn=0x0000000000474060 string=0x0000000000474064 "_"
 *   insn=0x0000000000474068 string=0x000000000047406C "H"
 *   insn=0x0000000000474070 string=0x0000000000474074 "\t@"
 *   insn=0x0000000000474070 string=0x0000000000474080 "H!"
 *   insn=0x0000000000474074 string=0x0000000000474078 "k"
 *   insn=0x0000000000474078 string=0x000000000047407C "\t"
 *   insn=0x0000000000474080 string=0x0000000000474084 "("
 *   insn=0x0000000000474090 string=0x0000000000474094 "A"
 *   insn=0x0000000000474094 string=0x0000000000474098 "kj@"
 *   insn=0x0000000000474094 string=0x00000000004740BC "!"
 *   insn=0x0000000000474098 string=0x000000000047409C "_"
 *   insn=0x00000000004740A0 string=0x00000000004740A4 "H"
 *   insn=0x00000000004740A4 string=0x00000000004740A8 "\t@"
 *   insn=0x00000000004740A8 string=0x00000000004740AC "k"
 *   insn=0x00000000004740AC string=0x00000000004740B0 "\t"
 *   insn=0x00000000004740B0 string=0x00000000004740B4 "*"
 *   insn=0x00000000004740C0 string=0x00000000004740C4 "S"
 *   insn=0x00000000004740C4 string=0x00000000001F3A10 "P'"
 *   insn=0x00000000004740CC string=0x00000000004740D0 "h"
 *   insn=0x00000000004740D0 string=0x00000000004740D4 "H"
 *   insn=0x00000000004740D4 string=0x00000000004740D8 "hf@9"
 *   insn=0x00000000004740D4 string=0x00000000004740FC ""
 *   insn=0x00000000004740D8 string=0x00000000004740DC ""
 *   insn=0x00000000004740DC string=0x00000000004740E0 ""
 *   insn=0x00000000004740E0 string=0x00000000004740E4 "!@"
 *   insn=0x00000000004740E8 string=0x00000000004740EC "`"
 *   insn=0x00000000004740FC string=0x0000000000474100 "m@"
 *   insn=0x0000000000474104 string=0x0000000000474108 "`"
 *   insn=0x0000000000474110 string=0x00000000001F9FB0 "0'"
 *   insn=0x0000000000474114 string=0x0000000000474118 ""
 *   insn=0x0000000000474118 string=0x000000000047411C "]@"
 *   insn=0x0000000000474120 string=0x0000000000474124 "@"
 *   insn=0x0000000000474138 string=0x000000000047413C ""
 *   insn=0x000000000047413C string=0x0000000000474140 "(y"
 *   insn=0x000000000047413C string=0x000000000047415C "ir@"
 *   insn=0x0000000000474144 string=0x0000000000474148 "I"
 *   insn=0x0000000000474154 string=0x00000000001F4550 "P'"
 *   insn=0x000000000047415C string=0x0000000000474160 "\n"
 *   insn=0x0000000000474160 string=0x0000000000474164 "4"
 *   insn=0x0000000000474164 string=0x0000000000474168 "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::AddComponent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x8
  int v5; // w11
  char *v6; // x1
  _QWORD *v7; // x9
  char *v8; // x10
  int v9; // w12
  __int64 v10; // x12
  __int64 v11; // x13
  __int64 v12; // x12
  __int64 v13; // x13
  __int64 v14; // x0
  __int64 result; // x0
  int v16; // w8
  __int64 v17; // x20

  v3 = *a2;
  v5 = *(_DWORD *)(*a2 + 32LL);
  if ( v5 )
  {
    v6 = *(char **)(a1 + 192);
    v7 = (_QWORD *)(a1 + 200);
    v8 = *(char **)(a1 + 200);
  }
  else
  {
    v7 = (_QWORD *)(a1 + 200);
    v8 = *(char **)(a1 + 200);
    v5 = 100;
    v6 = *(char **)(a1 + 192);
    if ( v6 != v8 )
    {
      v9 = *(_DWORD *)(*((_QWORD *)v8 - 1) + 32LL);
      if ( v9 >= 99 )
        v5 = v9 + 1;
      else
        v5 = 100;
    }
    *(_DWORD *)(v3 + 32) = v5;
  }
  v10 = v8 - v6;
  if ( (int)((unsigned __int64)(v8 - v6) >> 3) >= 1 )
  {
    v11 = (int)(v10 >> 3);
    v12 = v10 << 29 >> 29;
    v13 = v11 + 1;
    while ( *(_DWORD *)(*(_QWORD *)&v6[v12 - 8] + 32LL) >= v5 )
    {
      --v13;
      v12 -= 8;
      if ( v13 < 2 )
        goto LABEL_12;
    }
    if ( v8 - v6 == v12 && v8 != *(char **)(a1 + 208) )
    {
      *(_QWORD *)v8 = v3;
      ++*(_DWORD *)(v3 + 8);
      *v7 = v8 + 8;
      goto LABEL_21;
    }
LABEL_20:
    std::vector<boost::intrusive_ptr<Caver::Component>>::_M_insert_aux();
    goto LABEL_21;
  }
LABEL_12:
  if ( v8 != v6 || v8 == *(char **)(a1 + 208) )
    goto LABEL_20;
  *(_QWORD *)v8 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  *v7 = v8 + 8;
LABEL_21:
  v14 = *a2;
  *(_QWORD *)(*a2 + 40LL) = a1;
  if ( *(_QWORD *)(a1 + 32) && *(_BYTE *)(a1 + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
    Caver::Scene::RegisterNewComponent();
    v14 = *a2;
  }
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 216LL))(v14) & 1) != 0 )
    Caver::SceneObject::UpdateBounds((Caver::SceneObject *)a1);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  if ( (result & 1) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 216);
    v17 = *a2;
    if ( v16 >= *(_DWORD *)(a1 + 220) )
    {
      result = Caver::FastVector<Caver::Component *>::Resize();
      v16 = *(_DWORD *)(a1 + 216);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * v16) = v17;
    *(_DWORD *)(a1 + 216) = v16 + 1;
  }
  return result;
}

