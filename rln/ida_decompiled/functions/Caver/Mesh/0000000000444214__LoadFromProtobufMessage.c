/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000444214
 * Mangled: _ZN5Caver4Mesh23LoadFromProtobufMessageERKNS_5Proto4MeshE
 * Demangled: Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Callers: 2
 *   0x00000000001FA240  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6A80  std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8BE0  Caver::CopyFromFileBuffer32(uchar *,uchar const*,int)
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *   0x00000000002018C0  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *   0x0000000000202640  Caver::CopyFromFileBuffer16(uchar *,uchar const*,int)
 *   0x00000000002031E0  Caver::CopyFromFileBuffer8(uchar *,uchar const*,int)
 *   0x0000000000444A84  Caver::Mesh::AllocIndexBuffer(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 259
 *   insn=0x0000000000444230 string=0x0000000000444234 "X"
 *   insn=0x0000000000444234 string=0x0000000000444238 ""
 *   insn=0x0000000000444248 string=0x000000000044424C "h"
 *   insn=0x0000000000444250 string=0x0000000000444254 "h"
 *   insn=0x0000000000444254 string=0x0000000000444258 "\t"
 *   insn=0x000000000044425C string=0x0000000000444260 ")qC"
 *   insn=0x0000000000444260 string=0x0000000000444264 "`"
 *   insn=0x0000000000444268 string=0x000000000044426C ")"
 *   insn=0x000000000044426C string=0x0000000000444270 "("
 *   insn=0x0000000000444284 string=0x0000000000444288 ""
 *   insn=0x0000000000444288 string=0x000000000044428C ""
 *   insn=0x000000000044428C string=0x0000000000444290 "h"
 *   insn=0x0000000000444290 string=0x0000000000444294 "}@"
 *   insn=0x00000000004442A0 string=0x00000000004442A4 "h"
 *   insn=0x00000000004442A0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004442A4 string=0x00000000004442A8 "`"
 *   insn=0x00000000004442A8 string=0x00000000004442AC "h"
 *   insn=0x00000000004442B0 string=0x00000000004442B4 "+"
 *   insn=0x00000000004442B4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004442C0 string=0x00000000004442C4 ""
 *   insn=0x00000000004442C4 string=0x00000000004442C8 ""
 *   insn=0x00000000004442C8 string=0x00000000004442CC "h\n"
 *   insn=0x00000000004442CC string=0x00000000004442D0 "}@"
 *   insn=0x00000000004442DC string=0x00000000004442E0 "h"
 *   insn=0x00000000004442E0 string=0x00000000004442E4 "`"
 *   insn=0x00000000004442E4 string=0x00000000004442E8 "h"
 *   insn=0x00000000004442F4 string=0x00000000004442F8 "H"
 *   insn=0x00000000004442F8 string=0x00000000004442FC "u"
 *   insn=0x00000000004442F8 string=0x0000000000444340 "\t"
 *   insn=0x000000000044430C string=0x0000000000444310 "\t"
 *   insn=0x000000000044430C string=0x00000000004443C4 "("
 *   insn=0x0000000000444314 string=0x0000000000444318 ")qC"
 *   insn=0x000000000044431C string=0x0000000000444320 ")"
 *   insn=0x0000000000444320 string=0x0000000000444324 "("
 *   insn=0x0000000000444324 string=0x0000000000444328 "\t"
 *   insn=0x0000000000444328 string=0x000000000044432C "h"
 *   insn=0x000000000044432C string=0x0000000000444330 "*q@9"
 *   insn=0x0000000000444334 string=0x0000000000444370 "*@"
 *   insn=0x000000000044433C string=0x0000000000444388 "\n"
 *   insn=0x0000000000444344 string=0x0000000000444348 ")qC"
 *   insn=0x0000000000444348 string=0x000000000044434C "u"
 *   insn=0x0000000000444350 string=0x0000000000444354 ")"
 *   insn=0x0000000000444354 string=0x0000000000444358 "("
 *   insn=0x0000000000444358 string=0x000000000044435C "@"
 *   insn=0x000000000044435C string=0x0000000000444360 "\tq@9"
 *   insn=0x0000000000444364 string=0x00000000004443F8 "\t@"
 *   insn=0x0000000000444368 string=0x000000000044436C ")"
 *   insn=0x000000000044436C string=0x0000000000444410 "`\n"
 *   insn=0x0000000000444370 string=0x0000000000444374 "K"
 *   insn=0x000000000044437C string=0x000000000044438C "*\t@"
 *   insn=0x0000000000444380 string=0x0000000000444384 "J"
 *   insn=0x000000000044438C string=0x0000000000444390 "jB"
 *   insn=0x0000000000444390 string=0x0000000000444394 "*%C)?"
 *   insn=0x0000000000444394 string=0x0000000000444398 "?"
 *   insn=0x0000000000444398 string=0x000000000044439C "J}@"
 *   insn=0x00000000004443A4 string=0x00000000004443A8 "i"
 *   insn=0x00000000004443BC string=0x00000000001F6A80 "0'"
 *   insn=0x00000000004443C4 string=0x00000000004443C8 "\t"
 *   insn=0x00000000004443C4 string=0x0000000000444488 "("
 *   insn=0x00000000004443CC string=0x00000000004443D0 ")qC"
 *   insn=0x00000000004443D4 string=0x00000000004443D8 ")"
 *   insn=0x00000000004443D8 string=0x00000000004443DC "("
 *   insn=0x00000000004443DC string=0x00000000004443E0 "\t"
 *   insn=0x00000000004443E0 string=0x00000000004443E4 "h"
 *   insn=0x00000000004443E4 string=0x00000000004443E8 "*q@9j"
 *   insn=0x00000000004443E8 string=0x00000000004443EC "j"
 *   insn=0x00000000004443EC string=0x0000000000444418 "*@"
 *   insn=0x00000000004443F4 string=0x0000000000444430 "\n"
 *   insn=0x00000000004443F8 string=0x00000000004443FC "*"
 *   insn=0x00000000004443FC string=0x0000000000444400 "_"
 *   insn=0x0000000000444400 string=0x0000000000444404 ""-"
 *   insn=0x0000000000444404 string=0x00000000004449A8 "`\n@"
 *   insn=0x0000000000444408 string=0x000000000044440C " "
 *   insn=0x0000000000444410 string=0x0000000000444414 "f"
 *   insn=0x0000000000444414 string=0x00000000004449AC "\t\t@"
 *   insn=0x0000000000444418 string=0x000000000044441C "K"
 *   insn=0x0000000000444424 string=0x0000000000444434 "*\t@"
 *   insn=0x0000000000444428 string=0x000000000044442C "J"
 *   insn=0x0000000000444434 string=0x0000000000444438 "j"
 *   insn=0x0000000000444438 string=0x000000000044443C "*%C)?"
 *   insn=0x000000000044443C string=0x0000000000444440 "?"
 *   insn=0x0000000000444440 string=0x0000000000444444 "J}@"
 *   insn=0x000000000044444C string=0x0000000000444450 "i&"
 *   insn=0x0000000000444458 string=0x000000000044445C "?"
 *   insn=0x0000000000444460 string=0x0000000000444464 "("
 *   insn=0x0000000000444468 string=0x000000000044446C "!"
 *   insn=0x0000000000444488 string=0x000000000044448C "\t"
 *   insn=0x0000000000444488 string=0x000000000044452C "("
 *   insn=0x0000000000444490 string=0x0000000000444494 ")qC"
 *   insn=0x0000000000444498 string=0x000000000044449C ")"
 *   insn=0x000000000044449C string=0x00000000004444A0 "("
 *   insn=0x00000000004444A0 string=0x00000000004444A4 "\t5@"
 *   insn=0x00000000004444A4 string=0x00000000004444A8 "hb"
 *   insn=0x00000000004444A8 string=0x00000000004444AC "*q@9j"
 *   insn=0x00000000004444AC string=0x00000000004444B0 "j"
 *   insn=0x00000000004444B0 string=0x00000000004444BC "*@"
 *   insn=0x00000000004444B4 string=0x00000000004444B8 ""
 *   insn=0x00000000004444B8 string=0x00000000004444D4 "\n"
 *   insn=0x00000000004444BC string=0x00000000004444C0 "K"
 *   insn=0x00000000004444C8 string=0x00000000004444D8 "*\t@"
 *   insn=0x00000000004444CC string=0x00000000004444D0 "J"
 *   insn=0x00000000004444D8 string=0x00000000004444DC "j"
 *   insn=0x00000000004444DC string=0x00000000004444E0 "*%C)?"
 *   insn=0x00000000004444E0 string=0x00000000004444E4 "?"
 *   insn=0x00000000004444E4 string=0x00000000004444E8 "J}@"
 *   insn=0x00000000004444F0 string=0x00000000004444F4 "i6"
 *   insn=0x00000000004444FC string=0x0000000000444500 "?"
 *   insn=0x0000000000444504 string=0x0000000000444508 "("
 *   insn=0x000000000044450C string=0x0000000000444510 "!"
 *   insn=0x0000000000444520 string=0x0000000000444524 "W"
 *   insn=0x000000000044452C string=0x0000000000444530 "\t"
 *   insn=0x000000000044452C string=0x00000000004445D0 ""
 *   insn=0x0000000000444534 string=0x0000000000444538 ")qC"
 *   insn=0x000000000044453C string=0x0000000000444540 ")"
 *   insn=0x0000000000444540 string=0x0000000000444544 "("
 *   insn=0x0000000000444544 string=0x0000000000444548 "\t9@"
 *   insn=0x0000000000444548 string=0x000000000044454C "h"
 *   insn=0x000000000044454C string=0x0000000000444550 "*q@9j"
 *   insn=0x0000000000444550 string=0x0000000000444554 "j"
 *   insn=0x0000000000444554 string=0x0000000000444560 "*@"
 *   insn=0x0000000000444558 string=0x000000000044455C ""
 *   insn=0x000000000044455C string=0x0000000000444578 "\n"
 *   insn=0x0000000000444560 string=0x0000000000444564 "K"
 *   insn=0x000000000044456C string=0x000000000044457C "*\t@"
 *   insn=0x0000000000444570 string=0x0000000000444574 "J"
 *   insn=0x000000000044457C string=0x0000000000444580 "jB"
 *   insn=0x0000000000444580 string=0x0000000000444584 "*%C)?"
 *   insn=0x0000000000444584 string=0x0000000000444588 "?"
 *   insn=0x0000000000444588 string=0x000000000044458C "J}@"
 *   insn=0x0000000000444594 string=0x0000000000444598 "iB"
 *   insn=0x00000000004445A0 string=0x00000000004445A4 "?"
 *   insn=0x00000000004445A8 string=0x00000000004445AC "("
 *   insn=0x00000000004445B0 string=0x00000000004445B4 "!"
 *   insn=0x00000000004445C4 string=0x00000000004445C8 "."
 *   insn=0x00000000004445D0 string=0x00000000004445D4 "\t"
 *   insn=0x00000000004445D8 string=0x00000000004445DC ")qC"
 *   insn=0x00000000004445E0 string=0x00000000004445E4 ")"
 *   insn=0x00000000004445E4 string=0x00000000004445E8 "("
 *   insn=0x00000000004445E8 string=0x00000000004445EC "\t=@"
 *   insn=0x00000000004445EC string=0x00000000004445F0 "h""
 *   insn=0x00000000004445F0 string=0x00000000004445F4 "*q@9j"
 *   insn=0x00000000004445F4 string=0x00000000004445F8 "j"
 *   insn=0x00000000004445F8 string=0x0000000000444604 "*@"
 *   insn=0x00000000004445FC string=0x0000000000444600 ""
 *   insn=0x0000000000444600 string=0x000000000044461C "\n"
 *   insn=0x0000000000444604 string=0x0000000000444608 "K"
 *   insn=0x0000000000444610 string=0x0000000000444620 "*\t@"
 *   insn=0x0000000000444614 string=0x0000000000444618 "J"
 *   insn=0x0000000000444620 string=0x0000000000444624 "j"
 *   insn=0x0000000000444624 string=0x0000000000444628 "*%C)?"
 *   insn=0x0000000000444628 string=0x000000000044462C "?"
 *   insn=0x000000000044462C string=0x0000000000444630 "J}@"
 *   insn=0x0000000000444638 string=0x000000000044463C "iN"
 *   insn=0x0000000000444644 string=0x0000000000444648 "?"
 *   insn=0x000000000044464C string=0x0000000000444650 "("
 *   insn=0x0000000000444654 string=0x0000000000444658 "!"
 *   insn=0x0000000000444680 string=0x0000000000444684 ")"
 *   insn=0x0000000000444688 string=0x000000000044468C " "
 *   insn=0x000000000044468C string=0x0000000000444690 "vB"
 *   insn=0x0000000000444698 string=0x0000000000444728 "h*@"
 *   insn=0x000000000044469C string=0x00000000004446A0 "\t"
 *   insn=0x00000000004446A4 string=0x00000000004446A8 "(a"
 *   insn=0x00000000004446A8 string=0x00000000004446AC "jU"
 *   insn=0x00000000004446AC string=0x00000000004446B0 "}"
 *   insn=0x00000000004446B0 string=0x00000000004446B4 ""
 *   insn=0x00000000004446B4 string=0x00000000004446B8 "\n"
 *   insn=0x00000000004446B8 string=0x00000000004446BC "_\t"
 *   insn=0x00000000004446C0 string=0x00000000004446C4 "C"
 *   insn=0x00000000004446C4 string=0x00000000004446C8 "K"
 *   insn=0x00000000004446C4 string=0x000000000044470C "\t"
 *   insn=0x00000000004446D0 string=0x00000000004446D4 "h"
 *   insn=0x0000000000444700 string=0x0000000000444704 "_"
 *   insn=0x0000000000444718 string=0x000000000044471C "a"
 *   insn=0x0000000000444720 string=0x0000000000444724 "a"
 *   insn=0x0000000000444728 string=0x000000000044472C "`*"
 *   insn=0x0000000000444734 string=0x0000000000444738 "\n"
 *   insn=0x0000000000444738 string=0x000000000044473C "vBA"
 *   insn=0x0000000000444740 string=0x0000000000444744 "K"
 *   insn=0x000000000044474C string=0x0000000000444750 "h*@"
 *   insn=0x0000000000444750 string=0x0000000000444754 "J"
 *   insn=0x0000000000444754 string=0x0000000000444758 ""
 *   insn=0x0000000000444764 string=0x0000000000444768 "hB"
 *   insn=0x0000000000444768 string=0x000000000044476C ")a"
 *   insn=0x000000000044476C string=0x0000000000444770 "_"
 *   insn=0x000000000044478C string=0x0000000000444790 "k*@"
 *   insn=0x0000000000444790 string=0x0000000000444794 "*yw"
 *   insn=0x0000000000444794 string=0x0000000000444798 "i"
 *   insn=0x0000000000444798 string=0x000000000044479C "Lq@9l"
 *   insn=0x000000000044479C string=0x00000000004447A0 "l"
 *   insn=0x00000000004447A0 string=0x00000000004447AC "L@"
 *   insn=0x00000000004447A8 string=0x00000000004447C0 "li6"
 *   insn=0x00000000004447B4 string=0x00000000004447B8 "h"
 *   insn=0x00000000004447B8 string=0x00000000004447C4 "L\t@"
 *   insn=0x00000000004447C4 string=0x00000000004447C8 "k"
 *   insn=0x00000000004447C8 string=0x00000000004447CC "lA"
 *   insn=0x00000000004447CC string=0x00000000004447D0 "L)C)_"
 *   insn=0x00000000004447D0 string=0x00000000004447D4 "_"
 *   insn=0x00000000004447E0 string=0x00000000004447E4 "j\t"
 *   insn=0x00000000004447EC string=0x00000000004447F0 "?"
 *   insn=0x00000000004447F4 string=0x00000000004447F8 ")"
 *   insn=0x00000000004447FC string=0x0000000000444800 ")!"
 *   insn=0x0000000000444814 string=0x0000000000444818 "hBA"
 *   insn=0x0000000000444824 string=0x0000000000444828 "+"
 *   insn=0x0000000000444830 string=0x0000000000444834 " "
 *   insn=0x0000000000444834 string=0x0000000000444938 "\t"
 *   insn=0x0000000000444840 string=0x0000000000444844 "|"
 *   insn=0x0000000000444848 string=0x000000000044484C ""
 *   insn=0x0000000000444850 string=0x0000000000444854 "_"
 *   insn=0x0000000000444854 string=0x00000000001FB1D0 "0'"
 *   insn=0x0000000000444858 string=0x000000000044485C "("
 *   insn=0x0000000000444860 string=0x0000000000444864 "{"
 *   insn=0x0000000000444864 string=0x0000000000444868 "Z"
 *   insn=0x0000000000444868 string=0x000000000044486C " "
 *   insn=0x000000000044486C string=0x00000000004448F0 "h"
 *   insn=0x0000000000444870 string=0x0000000000444874 " "
 *   insn=0x0000000000444874 string=0x00000000004448B8 "h"
 *   insn=0x0000000000444878 string=0x000000000044487C "A"
 *   insn=0x000000000044487C string=0x0000000000444880 "h"
 *   insn=0x0000000000444880 string=0x0000000000444884 ""
 *   insn=0x000000000044488C string=0x0000000000444890 " "
 *   insn=0x0000000000444890 string=0x0000000000444894 "a"
 *   insn=0x000000000044489C string=0x00000000004448A0 "h"
 *   insn=0x000000000044489C string=0x00000000001F8BE0 "0'"
 *   insn=0x00000000004448B8 string=0x00000000004448BC "H"
 *   insn=0x00000000004448C4 string=0x00000000004448C8 " "
 *   insn=0x00000000004448C8 string=0x00000000004448CC "a"
 *   insn=0x00000000004448D0 string=0x00000000004448D4 "["
 *   insn=0x00000000004448D4 string=0x00000000004448D8 "h"
 *   insn=0x00000000004448FC string=0x0000000000444900 " "
 *   insn=0x0000000000444900 string=0x0000000000444904 "a"
 *   insn=0x0000000000444908 string=0x000000000044490C "5"
 *   insn=0x000000000044490C string=0x0000000000444910 "h"
 *   insn=0x000000000044493C string=0x0000000000444940 ")qC"
 *   insn=0x0000000000444940 string=0x0000000000444944 "jR"
 *   insn=0x0000000000444948 string=0x000000000044494C ")"
 *   insn=0x000000000044494C string=0x0000000000444950 "("
 *   insn=0x0000000000444950 string=0x0000000000444954 "E@"
 *   insn=0x0000000000444954 string=0x0000000000444958 "i"
 *   insn=0x000000000044495C string=0x0000000000444960 ""
 *   insn=0x0000000000444960 string=0x0000000000444964 " "
 *   insn=0x0000000000444964 string=0x0000000000444968 "H"
 *   insn=0x0000000000444968 string=0x000000000044496C "u"
 *   insn=0x000000000044496C string=0x0000000000444978 ""
 *   insn=0x0000000000444970 string=0x0000000000444974 "O"
 *   insn=0x0000000000444974 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000444984 string=0x0000000000444A40 "$"
 *   insn=0x00000000004449AC string=0x00000000004449B0 "w"
 *   insn=0x00000000004449B0 string=0x00000000004449B4 "i"
 *   insn=0x00000000004449B4 string=0x00000000004449B8 "\t!C)"
 *   insn=0x00000000004449BC string=0x00000000004449C0 ")}@"
 *   insn=0x00000000004449C8 string=0x00000000004449CC "h"
 *   insn=0x00000000004449D8 string=0x00000000004449DC "h\n@"
 *   insn=0x0000000000444A10 string=0x0000000000444A14 ":"
 *   insn=0x0000000000444A20 string=0x0000000000444A24 ""
 *   insn=0x0000000000444A24 string=0x0000000000444A28 "5"
 *   insn=0x0000000000444A34 string=0x0000000000444A38 "j"
 *   insn=0x0000000000444A38 string=0x0000000000444A3C "0"
 *   insn=0x0000000000444A40 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000444A70 string=0x0000000000444A74 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Mesh::LoadFromProtobufMessage(Caver::Mesh *this, const Caver::Proto::Mesh *a2)
{
  int v4; // w8
  Caver::MeshMaterial *v5; // x0
  const Caver::Proto::Mesh *v6; // x8
  __int64 v7; // x8
  unsigned __int64 v8; // x0
  __int64 v9; // x0
  void *v10; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x0
  __int64 v13; // x0
  void *v14; // x8
  __int64 v15; // x21
  int v16; // w8
  const Caver::Proto::Mesh *v17; // x8
  __int64 v18; // x9
  int v19; // w10
  Caver *v20; // x21
  const Caver::Proto::Mesh *v21; // x8
  __int64 v22; // x8
  int v23; // w0
  int v24; // w10
  __int64 v25; // x9
  const Caver::Proto::Mesh *v26; // x8
  __int64 v27; // x9
  _DWORD *v28; // x8
  int v29; // w10
  int v30; // w9
  int v31; // w10
  __int64 v32; // x9
  const Caver::Proto::Mesh *v33; // x8
  __int64 v34; // x9
  _DWORD *v35; // x8
  int v36; // w10
  int v37; // w10
  __int64 v38; // x9
  const Caver::Proto::Mesh *v39; // x8
  __int64 v40; // x9
  _DWORD *v41; // x8
  int v42; // w10
  int v43; // w10
  __int64 v44; // x9
  const Caver::Proto::Mesh *v45; // x8
  __int64 v46; // x9
  _DWORD *v47; // x8
  int v48; // w10
  int v49; // w10
  __int64 v50; // x9
  int v51; // w22
  unsigned __int64 v52; // x0
  __int64 v53; // x0
  unsigned __int64 v54; // x10
  __int64 v55; // x8
  __int64 v56; // x12
  __int64 v57; // x13
  void *v58; // x8
  __int64 v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x22
  __int64 v64; // x23
  __int64 v65; // x11
  __int64 v66; // x10
  __int64 v67; // x9
  int v68; // w12
  int v69; // w12
  __int64 v70; // x11
  __int64 v71; // x10
  char *v72; // x21
  char *v73; // x23
  __int64 v74; // x24
  __int64 v75; // x28
  __int64 v76; // x25
  __int64 v77; // x27
  int v78; // w0
  int v79; // w3
  unsigned int v80; // w22
  __int64 v81; // x27
  __int64 v82; // x26
  __int64 v83; // x28
  unsigned int v84; // w24
  __int64 v85; // x28
  unsigned int v86; // w24
  __int64 v87; // x28
  unsigned int v88; // w24
  const Caver::Proto::Mesh *v89; // x8
  __int64 v90; // x8
  __int128 v91; // q0
  __int64 v92; // x8
  int v93; // w23
  char *v94; // x8
  unsigned __int8 *v95; // x22
  unsigned int v96; // w23
  int v97; // w0
  int v98; // w3
  void *p; // [xsp+10h] [xbp-70h] BYREF
  char *v100; // [xsp+18h] [xbp-68h]
  char *v101; // [xsp+20h] [xbp-60h]
  __int64 v102; // [xsp+28h] [xbp-58h]

  v102 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = *(_QWORD *)((char *)a2 + 12);
  v4 = *((_DWORD *)a2 + 40);
  if ( (v4 & 0x200) != 0 )
  {
    v5 = (Caver::Mesh *)((char *)this + 160);
    if ( *((_QWORD *)a2 + 16) )
      v6 = a2;
    else
      v6 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
    Caver::MeshMaterial::LoadFromProtobufMessage(v5, *((const Caver::Proto::MeshMaterial **)v6 + 16));
    v4 = *((_DWORD *)a2 + 40);
  }
  if ( (v4 & 0x1000) != 0 )
  {
    v7 = *(_QWORD *)(**((_QWORD **)a2 + 19) - 24LL);
    *((_DWORD *)this + 70) = v7;
    v8 = (int)v7 < 0LL ? -1LL : (int)v7;
    v9 = operator new[](v8);
    v10 = (void *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = v9;
    if ( v10 )
      operator delete[](v10);
  }
  if ( (*((_BYTE *)a2 + 161) & 8) != 0 )
  {
    v11 = *(_QWORD *)(**((_QWORD **)a2 + 18) - 24LL);
    *((_DWORD *)this + 66) = v11;
    v12 = (int)v11 < 0LL ? -1LL : (int)v11;
    v13 = operator new[](v12);
    v14 = (void *)*((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = v13;
    if ( v14 )
      operator delete[](v14);
  }
  if ( (*((_BYTE *)a2 + 160) & 4) != 0 )
  {
    v20 = (Caver *)*((_QWORD *)this + 36);
    if ( *((_QWORD *)a2 + 3) )
      v21 = a2;
    else
      v21 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
    v22 = *((_QWORD *)v21 + 3);
    if ( (*(_BYTE *)(v22 + 28) & 1) != 0 )
    {
      v30 = *(_DWORD *)(v22 + 12);
      if ( (unsigned int)(v30 - 1) >= 7 )
        goto LABEL_154;
      v23 = v30 + 5119;
    }
    else
    {
      v23 = 0;
    }
    *((_DWORD *)this + 2) = v23;
LABEL_154:
    v93 = *((_DWORD *)this + 70);
    *(_QWORD *)((char *)this + 12) = *(_QWORD *)(v22 + 16);
    if ( (*(_DWORD *)(v22 + 28) & 8) != 0 )
      v94 = (char *)v20 + *(int *)(v22 + 24);
    else
      v94 = 0;
    *((_QWORD *)this + 3) = v94;
    v95 = (unsigned __int8 *)**((_QWORD **)a2 + 19);
    v96 = v93 / (int)Caver::SizeOfDataType();
    v97 = Caver::SizeOfDataType();
    switch ( v97 )
    {
      case 4:
        Caver::CopyFromFileBuffer32(v20, v95, (const unsigned __int8 *)v96, v98);
        break;
      case 2:
        Caver::CopyFromFileBuffer16(v20, v95, (const unsigned __int8 *)v96, v98);
        break;
      case 1:
        Caver::CopyFromFileBuffer8(v20, v95, (const unsigned __int8 *)v96, v98);
        break;
    }
  }
  v15 = *((_QWORD *)this + 34);
  v100 = 0;
  v101 = 0;
  p = 0;
  v16 = *((_DWORD *)a2 + 40);
  if ( (v16 & 8) == 0 )
    goto LABEL_37;
  if ( *((_QWORD *)a2 + 4) )
    v17 = a2;
  else
    v17 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v18 = *((_QWORD *)v17 + 4);
  if ( (*(_BYTE *)(v18 + 28) & 1) == 0 )
  {
    v19 = 0;
LABEL_32:
    *((_DWORD *)this + 8) = v19;
    goto LABEL_33;
  }
  v24 = *(_DWORD *)(v18 + 12);
  if ( (unsigned int)(v24 - 1) <= 6 )
  {
    v19 = v24 + 5119;
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)((char *)this + 36) = *(_QWORD *)(v18 + 16);
  if ( (*(_DWORD *)(v18 + 28) & 8) != 0 )
    v25 = v15 + *(int *)(v18 + 24);
  else
    v25 = 0;
  *((_QWORD *)this + 6) = v25;
  std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, 0);
  v16 = *((_DWORD *)a2 + 40);
LABEL_37:
  if ( (v16 & 0x10) == 0 )
    goto LABEL_56;
  if ( *((_QWORD *)a2 + 5) )
    v26 = a2;
  else
    v26 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v27 = *((_QWORD *)v26 + 5);
  v28 = (_DWORD *)((char *)this + 56);
  if ( (*(_BYTE *)(v27 + 28) & 1) == 0 )
  {
    v29 = 0;
LABEL_48:
    *v28 = v29;
    goto LABEL_49;
  }
  v31 = *(_DWORD *)(v27 + 12);
  if ( (unsigned int)(v31 - 1) <= 6 )
  {
    v29 = v31 + 5119;
    goto LABEL_48;
  }
LABEL_49:
  *(_QWORD *)((char *)this + 60) = *(_QWORD *)(v27 + 16);
  if ( (*(_DWORD *)(v27 + 28) & 8) != 0 )
    v32 = v15 + *(int *)(v27 + 24);
  else
    v32 = 0;
  *((_QWORD *)this + 9) = v32;
  if ( v100 == v101 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v100);
  }
  else
  {
    *(_QWORD *)v100 = v28;
    v100 += 8;
  }
  v16 = *((_DWORD *)a2 + 40);
LABEL_56:
  if ( (v16 & 0x40) == 0 )
    goto LABEL_72;
  if ( *((_QWORD *)a2 + 13) )
    v33 = a2;
  else
    v33 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v34 = *((_QWORD *)v33 + 13);
  v35 = (_DWORD *)((char *)this + 88);
  if ( (*(_BYTE *)(v34 + 28) & 1) == 0 )
  {
    v36 = 0;
LABEL_64:
    *v35 = v36;
    goto LABEL_65;
  }
  v37 = *(_DWORD *)(v34 + 12);
  if ( (unsigned int)(v37 - 1) <= 6 )
  {
    v36 = v37 + 5119;
    goto LABEL_64;
  }
LABEL_65:
  *(_QWORD *)((char *)this + 92) = *(_QWORD *)(v34 + 16);
  if ( (*(_DWORD *)(v34 + 28) & 8) != 0 )
    v38 = v15 + *(int *)(v34 + 24);
  else
    v38 = 0;
  *((_QWORD *)this + 13) = v38;
  if ( v100 == v101 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v100);
  }
  else
  {
    *(_QWORD *)v100 = v35;
    v100 += 8;
  }
  v16 = *((_DWORD *)a2 + 40);
LABEL_72:
  if ( (v16 & 0x80) == 0 )
    goto LABEL_88;
  if ( *((_QWORD *)a2 + 14) )
    v39 = a2;
  else
    v39 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v40 = *((_QWORD *)v39 + 14);
  v41 = (_DWORD *)((char *)this + 112);
  if ( (*(_BYTE *)(v40 + 28) & 1) == 0 )
  {
    v42 = 0;
LABEL_80:
    *v41 = v42;
    goto LABEL_81;
  }
  v43 = *(_DWORD *)(v40 + 12);
  if ( (unsigned int)(v43 - 1) <= 6 )
  {
    v42 = v43 + 5119;
    goto LABEL_80;
  }
LABEL_81:
  *(_QWORD *)((char *)this + 116) = *(_QWORD *)(v40 + 16);
  if ( (*(_DWORD *)(v40 + 28) & 8) != 0 )
    v44 = v15 + *(int *)(v40 + 24);
  else
    v44 = 0;
  *((_QWORD *)this + 16) = v44;
  if ( v100 == v101 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v100);
  }
  else
  {
    *(_QWORD *)v100 = v41;
    v100 += 8;
  }
  v16 = *((_DWORD *)a2 + 40);
LABEL_88:
  if ( (v16 & 0x100) == 0 )
    goto LABEL_103;
  if ( *((_QWORD *)a2 + 15) )
    v45 = a2;
  else
    v45 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v46 = *((_QWORD *)v45 + 15);
  v47 = (_DWORD *)((char *)this + 136);
  if ( (*(_BYTE *)(v46 + 28) & 1) == 0 )
  {
    v48 = 0;
LABEL_96:
    *v47 = v48;
    goto LABEL_97;
  }
  v49 = *(_DWORD *)(v46 + 12);
  if ( (unsigned int)(v49 - 1) <= 6 )
  {
    v48 = v49 + 5119;
    goto LABEL_96;
  }
LABEL_97:
  *(_QWORD *)((char *)this + 140) = *(_QWORD *)(v46 + 16);
  if ( (*(_DWORD *)(v46 + 28) & 8) != 0 )
    v50 = v15 + *(int *)(v46 + 24);
  else
    v50 = 0;
  *((_QWORD *)this + 19) = v50;
  if ( v100 == v101 )
  {
    std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v100);
  }
  else
  {
    *(_QWORD *)v100 = v47;
    v100 += 8;
  }
LABEL_103:
  v51 = *((_DWORD *)a2 + 14);
  if ( is_mul_ok(v51, 0x18u) )
    v52 = 24LL * v51;
  else
    v52 = -1;
  *((_DWORD *)this + 80) = v51;
  v53 = operator new[](v52);
  if ( v51 )
  {
    v54 = (24LL * v51 - 24) / 0x18uLL + 1;
    v55 = v53;
    if ( v54 < 2 )
      goto LABEL_165;
    v56 = v53 + 24;
    v55 = v53 + 24 * (v54 & 0x1FFFFFFFFFFFFFFELL);
    v57 = v54 & 0x1FFFFFFFFFFFFFFELL;
    do
    {
      *(_QWORD *)(v56 - 24) = 0;
      *(_QWORD *)v56 = 0;
      *(_DWORD *)(v56 - 16) = 0;
      *(_DWORD *)(v56 + 8) = 0;
      *(_QWORD *)(v56 - 8) = 0;
      *(_QWORD *)(v56 + 16) = 0;
      v57 -= 2;
      v56 += 48;
    }
    while ( v57 );
    if ( v54 != (v54 & 0x1FFFFFFFFFFFFFFELL) )
    {
LABEL_165:
      do
      {
        *(_QWORD *)v55 = 0;
        *(_DWORD *)(v55 + 8) = 0;
        *(_QWORD *)(v55 + 16) = 0;
        v55 += 24;
      }
      while ( v55 != v53 + 24LL * v51 );
    }
  }
  v58 = (void *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = v53;
  if ( v58 )
  {
    operator delete[](v58);
    v51 = *((_DWORD *)this + 80);
  }
  if ( v51 >= 1 )
  {
    v59 = 0;
    v60 = 0;
    do
    {
      ++v60;
      v61 = *((_QWORD *)this + 10) + v59;
      *(_QWORD *)v61 = 0;
      *(_DWORD *)(v61 + 8) = 0;
      *(_QWORD *)(v61 + 16) = 0;
      v62 = *((int *)this + 80);
      v59 += 24;
    }
    while ( v60 < v62 );
    if ( (int)v62 > 0 )
    {
      v63 = 0;
      v64 = 0;
      while ( 1 )
      {
        v65 = *((_QWORD *)this + 10);
        v66 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 8 * v64);
        v67 = v65 + v63;
        if ( (*(_BYTE *)(v66 + 28) & 1) == 0 )
          break;
        v69 = *(_DWORD *)(v66 + 12);
        if ( (unsigned int)(v69 - 1) <= 6 )
        {
          v68 = v69 + 5119;
          goto LABEL_123;
        }
LABEL_124:
        v70 = v65 + v63;
        *(_QWORD *)(v70 + 4) = *(_QWORD *)(v66 + 16);
        if ( (*(_DWORD *)(v66 + 28) & 8) != 0 )
          v71 = v15 + *(int *)(v66 + 24);
        else
          v71 = 0;
        *(_QWORD *)(v70 + 16) = v71;
        if ( v100 == v101 )
        {
          std::vector<Caver::MeshData const*>::_M_insert_aux((int)&p, v100);
          LODWORD(v62) = *((_DWORD *)this + 80);
        }
        else
        {
          *(_QWORD *)v100 = v67;
          v100 += 8;
        }
        ++v64;
        v63 += 24;
        if ( v64 >= (int)v62 )
          goto LABEL_131;
      }
      v68 = 0;
LABEL_123:
      *(_DWORD *)(v65 + v63) = v68;
      goto LABEL_124;
    }
  }
LABEL_131:
  v72 = (char *)p;
  v73 = v100;
  if ( p != v100 )
  {
    do
    {
      v74 = *(_QWORD *)v72;
      v75 = *((_QWORD *)this + 34);
      v76 = *(_QWORD *)(*(_QWORD *)v72 + 16LL);
      v77 = **((_QWORD **)a2 + 18);
      v78 = Caver::SizeOfDataType();
      v80 = *(_DWORD *)(v74 + 4);
      v81 = v77 + v76 - v75;
      v82 = *(int *)(v74 + 8);
      if ( v78 == 1 )
      {
        if ( *(_DWORD *)this )
        {
          v87 = 0;
          v88 = 0;
          do
          {
            Caver::CopyFromFileBuffer8(
              (Caver *)(v76 + v87),
              (unsigned __int8 *)(v81 + v87),
              (const unsigned __int8 *)v80,
              v79);
            ++v88;
            v87 += v82;
          }
          while ( v88 < *(_DWORD *)this );
        }
      }
      else if ( v78 == 2 )
      {
        if ( *(_DWORD *)this )
        {
          v85 = 0;
          v86 = 0;
          do
          {
            Caver::CopyFromFileBuffer16(
              (Caver *)(v76 + v85),
              (unsigned __int8 *)(v81 + v85),
              (const unsigned __int8 *)v80,
              v79);
            ++v86;
            v85 += v82;
          }
          while ( v86 < *(_DWORD *)this );
        }
      }
      else if ( v78 == 4 && *(_DWORD *)this )
      {
        v83 = 0;
        v84 = 0;
        do
        {
          Caver::CopyFromFileBuffer32(
            (Caver *)(v76 + v83),
            (unsigned __int8 *)(v81 + v83),
            (const unsigned __int8 *)v80,
            v79);
          ++v84;
          v83 += v82;
        }
        while ( v84 < *(_DWORD *)this );
      }
      v72 += 8;
    }
    while ( v72 != v73 );
    v72 = (char *)p;
  }
  if ( *((_QWORD *)a2 + 17) )
    v89 = a2;
  else
    v89 = (const Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v90 = *((_QWORD *)v89 + 17);
  v91 = *(_OWORD *)(v90 + 12);
  v92 = *(_QWORD *)(v90 + 28);
  *(_OWORD *)((char *)this + 324) = v91;
  *(_QWORD *)((char *)this + 340) = v92;
  if ( v72 )
    operator delete(v72);
}

