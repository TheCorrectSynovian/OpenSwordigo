/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026C0F0
 * Mangled: _ZN5Caver25EntityControllerComponent6UpdateEf
 * Demangled: Caver::EntityControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FB880  Caver::EntityControllerComponent::Update(float)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FC480  Caver::EntityActionComponent::IsFinished(void)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x0000000000201300  Caver::EntityControllerComponent::RoamUpdate(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 308
 *   insn=0x000000000026C10C string=0x000000000026C110 "V"
 *   insn=0x000000000026C118 string=0x000000000026C11C ""
 *   insn=0x000000000026C120 string=0x000000000026C124 "hB@"
 *   insn=0x000000000026C128 string=0x000000000026C12C "`"
 *   insn=0x000000000026C128 string=0x000000000026C140 "`"
 *   insn=0x000000000026C130 string=0x000000000026C134 "k."
 *   insn=0x000000000026C134 string=0x000000000026C138 "hB@"
 *   insn=0x000000000026C134 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026C144 string=0x000000000026C148 ""
 *   insn=0x000000000026C144 string=0x000000000026C1A0 "`&A"
 *   insn=0x000000000026C14C string=0x000000000026C150 "e@"
 *   insn=0x000000000026C154 string=0x000000000026C158 "`"
 *   insn=0x000000000026C15C string=0x000000000026C160 "`"
 *   insn=0x000000000026C15C string=0x00000000001FC480 "0'"
 *   insn=0x000000000026C160 string=0x000000000026C164 "`"
 *   insn=0x000000000026C160 string=0x000000000026C1AC "`z@"
 *   insn=0x000000000026C16C string=0x000000000026C170 "@"
 *   insn=0x000000000026C16C string=0x000000000026C180 "`N@"
 *   insn=0x000000000026C170 string=0x000000000026C174 ""
 *   insn=0x000000000026C174 string=0x000000000026C178 ""
 *   insn=0x000000000026C17C string=0x000000000026C79C ""
 *   insn=0x000000000026C180 string=0x000000000026C184 "`1"
 *   insn=0x000000000026C184 string=0x000000000026C188 "`""
 *   insn=0x000000000026C18C string=0x000000000026C190 "T."
 *   insn=0x000000000026C190 string=0x000000000026C194 "`N@"
 *   insn=0x000000000026C1A4 string=0x000000000026C1A8 "`&"
 *   insn=0x000000000026C1B0 string=0x000000000026C1B4 ""
 *   insn=0x000000000026C1B4 string=0x000000000026C1B8 "\n"
 *   insn=0x000000000026C1B8 string=0x000000000026C2F8 "h"
 *   insn=0x000000000026C1BC string=0x000000000026C1C0 "@"
 *   insn=0x000000000026C1C0 string=0x000000000026C1C4 ""
 *   insn=0x000000000026C1C4 string=0x000000000026C1C8 ""
 *   insn=0x000000000026C1CC string=0x000000000026C2E4 ""
 *   insn=0x000000000026C1D0 string=0x000000000026C1D4 "`"
 *   insn=0x000000000026C1D0 string=0x0000000000583734 "o"
 *   insn=0x000000000026C1E0 string=0x000000000026C1E4 "h"
 *   insn=0x000000000026C1E8 string=0x000000000026C1EC ""
 *   insn=0x000000000026C1EC string=0x000000000026C1F0 "!"
 *   insn=0x000000000026C1F4 string=0x000000000026C1F8 "bI"
 *   insn=0x000000000026C208 string=0x000000000026C20C ""
 *   insn=0x000000000026C21C string=0x000000000026C220 ""
 *   insn=0x000000000026C220 string=0x000000000026C224 "h"
 *   insn=0x000000000026C228 string=0x000000000026C22C "`"
 *   insn=0x000000000026C234 string=0x000000000026C238 "b"
 *   insn=0x000000000026C238 string=0x000000000026C23C "b"
 *   insn=0x000000000026C23C string=0x000000000026C240 " "
 *   insn=0x000000000026C240 string=0x000000000026C244 "@8@"
 *   insn=0x000000000026C254 string=0x000000000026C258 "A""
 *   insn=0x000000000026C264 string=0x000000000026C268 "@"
 *   insn=0x000000000026C264 string=0x000000000026C274 "hz@"
 *   insn=0x000000000026C268 string=0x000000000026C26C ""
 *   insn=0x000000000026C26C string=0x000000000026C270 ""
 *   insn=0x000000000026C274 string=0x000000000026C278 "`z"
 *   insn=0x000000000026C278 string=0x000000000026C27C "h"
 *   insn=0x000000000026C27C string=0x000000000026C280 "\t\t@"
 *   insn=0x000000000026C280 string=0x000000000026C284 ")"
 *   insn=0x000000000026C284 string=0x000000000026C288 "\t\t"
 *   insn=0x000000000026C28C string=0x000000000026C290 "\t"
 *   insn=0x000000000026C294 string=0x000000000026C298 ")"
 *   insn=0x000000000026C298 string=0x000000000026C29C " "
 *   insn=0x000000000026C29C string=0x000000000026C2A0 "`z@"
 *   insn=0x000000000026C2A0 string=0x000000000026C2A4 "b"
 *   insn=0x000000000026C2C0 string=0x000000000026C2C4 ")"
 *   insn=0x000000000026C2D0 string=0x000000000026C2D4 "a"
 *   insn=0x000000000026C2E4 string=0x000000000026C2E8 ""
 *   insn=0x000000000026C2EC string=0x000000000026C2F0 "hz@"
 *   insn=0x000000000026C300 string=0x000000000026C390 "hz@"
 *   insn=0x000000000026C308 string=0x000000000026C318 "hz@"
 *   insn=0x000000000026C310 string=0x000000000026C314 ">"
 *   insn=0x000000000026C318 string=0x000000000026C31C "H"
 *   insn=0x000000000026C31C string=0x000000000026C320 "i"
 *   insn=0x000000000026C324 string=0x000000000026C328 "h\nA"
 *   insn=0x000000000026C328 string=0x000000000026C32C "!q@"
 *   insn=0x000000000026C32C string=0x000000000026C330 "\t"
 *   insn=0x000000000026C334 string=0x000000000026C338 "  "
 *   insn=0x000000000026C338 string=0x000000000026C33C "4E"
 *   insn=0x000000000026C33C string=0x000000000026C340 "h)"
 *   insn=0x000000000026C340 string=0x000000000026C344 "hB@"
 *   insn=0x000000000026C340 string=0x000000000026C86C "`B@"
 *   insn=0x000000000026C348 string=0x000000000026C34C "`"
 *   insn=0x000000000026C348 string=0x000000000026C360 "q@"
 *   insn=0x000000000026C354 string=0x000000000026C358 "hB@"
 *   insn=0x000000000026C358 string=0x000000000026C35C "H"
 *   insn=0x000000000026C368 string=0x000000000026C36C "h*A"
 *   insn=0x000000000026C368 string=0x000000000026CA58 "h\nA"
 *   insn=0x000000000026C378 string=0x000000000026C37C "`2A"
 *   insn=0x000000000026C380 string=0x000000000026C384 "h"
 *   insn=0x000000000026C394 string=0x000000000026C398 "i"
 *   insn=0x000000000026C39C string=0x000000000026C3A0 "hB@"
 *   insn=0x000000000026C3A0 string=0x000000000026C3A4 "!q@"
 *   insn=0x000000000026C3A4 string=0x000000000026C3A8 "\t"
 *   insn=0x000000000026C3A8 string=0x000000000026C3AC "\t8!"
 *   insn=0x000000000026C3AC string=0x000000000026C3B0 "(! "
 *   insn=0x000000000026C3B0 string=0x000000000026C3B4 "4E"
 *   insn=0x000000000026C3B8 string=0x000000000026C3BC "`"
 *   insn=0x000000000026C3B8 string=0x000000000026C3D0 "q@"
 *   insn=0x000000000026C3C4 string=0x000000000026C3C8 "hB@"
 *   insn=0x000000000026C3C8 string=0x000000000026C3CC "H"
 *   insn=0x000000000026C3D4 string=0x000000000026C3D8 " "
 *   insn=0x000000000026C3D8 string=0x000000000026C3DC "@+"
 *   insn=0x000000000026C3DC string=0x000000000026C3E0 "h*A"
 *   insn=0x000000000026C3E4 string=0x000000000026C3E8 "A*"
 *   insn=0x000000000026C3EC string=0x000000000026C3F0 "a2A"
 *   insn=0x000000000026C3F4 string=0x000000000026C3F8 "h"
 *   insn=0x000000000026C3F8 string=0x000000000026C3FC "!x""
 *   insn=0x000000000026C3FC string=0x000000000026C400 "P"
 *   insn=0x000000000026C40C string=0x000000000026C410 "`2A"
 *   insn=0x000000000026C410 string=0x000000000026C414 "\t5G"
 *   insn=0x000000000026C41C string=0x000000000026C420 "h"
 *   insn=0x000000000026C41C string=0x000000000026C494 "`6A"
 *   insn=0x000000000026C42C string=0x000000000026C430 "`2"
 *   insn=0x000000000026C434 string=0x000000000026C438 "`B@"
 *   insn=0x000000000026C438 string=0x000000000026C43C "t*A"
 *   insn=0x000000000026C444 string=0x000000000026C448 "`"
 *   insn=0x000000000026C450 string=0x000000000026C454 "`B@"
 *   insn=0x000000000026C45C string=0x000000000026C460 "t"
 *   insn=0x000000000026C45C string=0x00000000001FD020 "0'"
 *   insn=0x000000000026C464 string=0x000000000026C468 "hB@"
 *   insn=0x000000000026C468 string=0x000000000026C46C "u\nA"
 *   insn=0x000000000026C470 string=0x000000000026C474 "`"
 *   insn=0x000000000026C470 string=0x000000000026C484 "q@"
 *   insn=0x000000000026C47C string=0x000000000026C480 "hB@"
 *   insn=0x000000000026C498 string=0x000000000026C49C ""
 *   insn=0x000000000026C49C string=0x000000000026C4A0 "h"
 *   insn=0x000000000026C49C string=0x000000000026C51C "t"
 *   insn=0x000000000026C4AC string=0x000000000026C4B0 "`6"
 *   insn=0x000000000026C4B0 string=0x000000000026C4B4 "E"
 *   insn=0x000000000026C4B4 string=0x000000000026C4B8 "t.A"
 *   insn=0x000000000026C4B8 string=0x000000000026C4BC "hB@"
 *   insn=0x000000000026C4C0 string=0x000000000026C4C4 "t\n"
 *   insn=0x000000000026C4C8 string=0x000000000026C4CC "`"
 *   insn=0x000000000026C4C8 string=0x000000000026C4E0 "`"
 *   insn=0x000000000026C4D4 string=0x000000000026C4D8 "hB@"
 *   insn=0x000000000026C4D8 string=0x000000000026C4DC "t\nA"
 *   insn=0x000000000026C4EC string=0x000000000026C4F0 "u"
 *   insn=0x000000000026C4F0 string=0x000000000026C4F4 "U"
 *   insn=0x000000000026C4F8 string=0x000000000026C4FC "`"
 *   insn=0x000000000026C4F8 string=0x000000000026C50C "q@"
 *   insn=0x000000000026C500 string=0x000000000026C504 "w-"
 *   insn=0x000000000026C504 string=0x000000000026C508 "hB@"
 *   insn=0x000000000026C524 string=0x000000000026C718 "`B@"
 *   insn=0x000000000026C52C string=0x000000000026C530 ""
 *   insn=0x000000000026C530 string=0x000000000026C534 "h"
 *   insn=0x000000000026C534 string=0x000000000026C538 "L@"
 *   insn=0x000000000026C53C string=0x000000000026C540 ""
 *   insn=0x000000000026C53C string=0x000000000026C550 ""
 *   insn=0x000000000026C540 string=0x000000000026C544 "h"
 *   insn=0x000000000026C554 string=0x000000000026C558 "e@"
 *   insn=0x000000000026C564 string=0x000000000026C568 "!"
 *   insn=0x000000000026C568 string=0x000000000026C56C "w"
 *   insn=0x000000000026C56C string=0x000000000026C570 "u"
 *   insn=0x000000000026C574 string=0x000000000026C578 ""
 *   insn=0x000000000026C578 string=0x000000000026C57C "t"
 *   insn=0x000000000026C584 string=0x000000000026C5B8 "`B@"
 *   insn=0x000000000026C588 string=0x000000000026C58C "L@"
 *   insn=0x000000000026C590 string=0x000000000026C594 ""
 *   insn=0x000000000026C598 string=0x000000000026C59C ""
 *   insn=0x000000000026C5A0 string=0x000000000026C5A4 "e@"
 *   insn=0x000000000026C5B8 string=0x000000000026C5BC "u""
 *   insn=0x000000000026C5C0 string=0x000000000026C5D4 ""
 *   insn=0x000000000026C5C8 string=0x000000000026C5CC "E-"
 *   insn=0x000000000026C5CC string=0x000000000026C5D0 "`B@"
 *   insn=0x000000000026C5D8 string=0x000000000026C5DC "e@"
 *   insn=0x000000000026C5E0 string=0x000000000026C5E4 "`N@"
 *   insn=0x000000000026C5E8 string=0x000000000026C5FC ""
 *   insn=0x000000000026C5F0 string=0x000000000026C5F4 ";-"
 *   insn=0x000000000026C5F4 string=0x000000000026C5F8 "`N@"
 *   insn=0x000000000026C600 string=0x000000000026C604 "e@"
 *   insn=0x000000000026C608 string=0x000000000026C60C "w"
 *   insn=0x000000000026C614 string=0x000000000026C648 "`B@"
 *   insn=0x000000000026C618 string=0x000000000026C61C "L@"
 *   insn=0x000000000026C620 string=0x000000000026C624 ""
 *   insn=0x000000000026C628 string=0x000000000026C62C ""
 *   insn=0x000000000026C630 string=0x000000000026C634 "e@"
 *   insn=0x000000000026C64C string=0x000000000026C660 ""
 *   insn=0x000000000026C654 string=0x000000000026C658 ""-"
 *   insn=0x000000000026C658 string=0x000000000026C65C "`B@"
 *   insn=0x000000000026C664 string=0x000000000026C668 "e@"
 *   insn=0x000000000026C66C string=0x000000000026C670 "`N@"
 *   insn=0x000000000026C674 string=0x000000000026C688 ""
 *   insn=0x000000000026C680 string=0x000000000026C684 "`N@"
 *   insn=0x000000000026C68C string=0x000000000026C690 "e@"
 *   insn=0x000000000026C694 string=0x000000000026C698 "w"
 *   insn=0x000000000026C6A0 string=0x000000000026C6D4 "`B@"
 *   insn=0x000000000026C6A4 string=0x000000000026C6A8 "L@"
 *   insn=0x000000000026C6AC string=0x000000000026C6B0 ""
 *   insn=0x000000000026C6B4 string=0x000000000026C6B8 ""
 *   insn=0x000000000026C6BC string=0x000000000026C6C0 "e@"
 *   insn=0x000000000026C6D8 string=0x000000000026C6EC ""
 *   insn=0x000000000026C6E4 string=0x000000000026C6E8 "`B@"
 *   insn=0x000000000026C6F0 string=0x000000000026C6F4 "e@"
 *   insn=0x000000000026C6F8 string=0x000000000026C6FC "`N@"
 *   insn=0x000000000026C700 string=0x000000000026C75C ""
 *   insn=0x000000000026C70C string=0x000000000026C710 "`N@"
 *   insn=0x000000000026C71C string=0x000000000026C720 "`"
 *   insn=0x000000000026C71C string=0x000000000026C730 ""
 *   insn=0x000000000026C728 string=0x000000000026C72C "`B@"
 *   insn=0x000000000026C734 string=0x000000000026C738 "e@"
 *   insn=0x000000000026C73C string=0x000000000026C740 "`N@"
 *   insn=0x000000000026C744 string=0x000000000026C748 "`""
 *   insn=0x000000000026C750 string=0x000000000026C754 "`N@"
 *   insn=0x000000000026C760 string=0x000000000026C764 "e@"
 *   insn=0x000000000026C774 string=0x000000000026C778 "a"
 *   insn=0x000000000026C778 string=0x000000000026CAA4 "&"
 *   insn=0x000000000026C79C string=0x000000000026C7A0 ""
 *   insn=0x000000000026C7A4 string=0x000000000026C7A8 "`N@"
 *   insn=0x000000000026C7B4 string=0x000000000026C7D0 "h"
 *   insn=0x000000000026C7B8 string=0x000000000026C7BC "u"
 *   insn=0x000000000026C7C4 string=0x000000000026C7C8 "!"
 *   insn=0x000000000026C7C8 string=0x000000000026C7CC "x"
 *   insn=0x000000000026C7C8 string=0x000000000026C80C ""
 *   insn=0x000000000026C7D4 string=0x000000000026C7D8 "u"
 *   insn=0x000000000026C7E0 string=0x000000000026C7E4 ""
 *   insn=0x000000000026C7F0 string=0x000000000026C7F4 "`N@"
 *   insn=0x000000000026C7F8 string=0x000000000026C7FC "`""
 *   insn=0x000000000026C804 string=0x000000000026C808 "`N@"
 *   insn=0x000000000026C80C string=0x000000000026C810 "i"
 *   insn=0x000000000026C810 string=0x000000000026C814 ""
 *   insn=0x000000000026C81C string=0x000000000026C820 "*\t@"
 *   insn=0x000000000026C820 string=0x000000000026C824 "J"
 *   insn=0x000000000026C824 string=0x000000000026C828 "*\t"
 *   insn=0x000000000026C82C string=0x000000000026C830 " 9L"
 *   insn=0x000000000026C82C string=0x0000000000583C38 "\n"
 *   insn=0x000000000026C83C string=0x000000000026C840 "`"
 *   insn=0x000000000026C840 string=0x000000000026C844 "@"
 *   insn=0x000000000026C844 string=0x000000000026C848 ""
 *   insn=0x000000000026C848 string=0x000000000026C84C ""
 *   insn=0x000000000026C850 string=0x000000000026C854 ""
 *   insn=0x000000000026C854 string=0x000000000026C858 ""
 *   insn=0x000000000026C85C string=0x000000000026C860 "`z@"
 *   insn=0x000000000026C864 string=0x000000000026C868 "Z"
 *   insn=0x000000000026C874 string=0x000000000026C878 "t."
 *   insn=0x000000000026C878 string=0x000000000026C87C "t\n"
 *   insn=0x000000000026C880 string=0x000000000026C884 "`"
 *   insn=0x000000000026C880 string=0x000000000026C898 "`"
 *   insn=0x000000000026C88C string=0x000000000026C890 "`B@"
 *   insn=0x000000000026C890 string=0x000000000026C894 "u\nA"
 *   insn=0x000000000026C8A4 string=0x000000000026C8A8 "w"
 *   insn=0x000000000026C8A8 string=0x000000000026C8AC "W"
 *   insn=0x000000000026C8B0 string=0x000000000026C8B4 "`"
 *   insn=0x000000000026C8B0 string=0x000000000026C8C4 "p@"
 *   insn=0x000000000026C8BC string=0x000000000026C8C0 "`B@"
 *   insn=0x000000000026C8D4 string=0x000000000026C8D8 "t*"
 *   insn=0x000000000026C8DC string=0x000000000026C8E0 "`"
 *   insn=0x000000000026C8E4 string=0x000000000026C8E8 "~,"
 *   insn=0x000000000026C8E8 string=0x000000000026C8EC "`B@"
 *   insn=0x000000000026C8F4 string=0x000000000026C8F8 "t"
 *   insn=0x000000000026C8FC string=0x000000000026C900 "hB@"
 *   insn=0x000000000026C900 string=0x000000000026C904 "u\nA"
 *   insn=0x000000000026C908 string=0x000000000026C90C "`"
 *   insn=0x000000000026C908 string=0x000000000026C91C "q@"
 *   insn=0x000000000026C910 string=0x000000000026C914 "s,"
 *   insn=0x000000000026C914 string=0x000000000026C918 "hB@"
 *   insn=0x000000000026C934 string=0x000000000026C938 "t*"
 *   insn=0x000000000026C938 string=0x000000000026C93C "h"
 *   insn=0x000000000026C958 string=0x000000000026C95C "\t5D"
 *   insn=0x000000000026C95C string=0x000000000026C960 "*"
 *   insn=0x000000000026C968 string=0x000000000026C980 ",A"
 *   insn=0x000000000026C970 string=0x000000000026C9CC "h\nA"
 *   insn=0x000000000026C974 string=0x000000000026C978 "\tiO"
 *   insn=0x000000000026C978 string=0x000000000026C97C "\n"
 *   insn=0x000000000026C980 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000026C984 string=0x000000000026C988 ""
 *   insn=0x000000000026C990 string=0x000000000026C994 "h\nA"
 *   insn=0x000000000026C998 string=0x000000000026C99C " "
 *   insn=0x000000000026C99C string=0x000000000026C9A0 "@\t "
 *   insn=0x000000000026C9A0 string=0x000000000026C9A4 " ) "
 *   insn=0x000000000026C9A8 string=0x000000000026C9DC "hB@"
 *   insn=0x000000000026C9B0 string=0x000000000026C9B4 "h.A"
 *   insn=0x000000000026C9BC string=0x000000000026C9C0 "t."
 *   insn=0x000000000026C9C0 string=0x000000000026C9C4 "`6"
 *   insn=0x000000000026C9E0 string=0x000000000026C9E4 "t."
 *   insn=0x000000000026C9E4 string=0x000000000026C9E8 "t\n"
 *   insn=0x000000000026C9EC string=0x000000000026C9F0 "`"
 *   insn=0x000000000026C9EC string=0x000000000026CA04 "`"
 *   insn=0x000000000026C9F4 string=0x000000000026C9F8 ":,"
 *   insn=0x000000000026C9F8 string=0x000000000026C9FC "hB@"
 *   insn=0x000000000026C9FC string=0x000000000026CA00 "t\nA"
 *   insn=0x000000000026CA10 string=0x000000000026CA14 "u"
 *   insn=0x000000000026CA1C string=0x000000000026CA20 "`"
 *   insn=0x000000000026CA1C string=0x000000000026CA30 "q@"
 *   insn=0x000000000026CA24 string=0x000000000026CA28 ".,"
 *   insn=0x000000000026CA28 string=0x000000000026CA2C "hB@"
 *   insn=0x000000000026CA3C string=0x000000000026CA40 "s"
 *   insn=0x000000000026CA48 string=0x000000000026CA4C "t*"
 *   insn=0x000000000026CA4C string=0x000000000026CA50 "h"
 *   insn=0x000000000026CA5C string=0x000000000026CA60 "`"
 *   insn=0x000000000026CA60 string=0x000000000026CA64 "h.A"
 *   insn=0x000000000026CA70 string=0x000000000026CA74 "`6A"
 *   insn=0x000000000026CA78 string=0x000000000026CA7C "h"
 *   insn=0x000000000026CA84 string=0x000000000026CA88 "a"
 *   insn=0x000000000026CA90 string=0x000000000026CA94 "h"
 *   insn=0x000000000026CA94 string=0x000000000026CA98 "t."
 *   insn=0x000000000026CA9C string=0x000000000026CAA0 "["
 *   insn=0x000000000026CAA4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026CAAC string=0x000000000026CAB0 "("
 *   insn=0x000000000026CAB0 string=0x000000000026CAB4 "\t\t@"
 *   insn=0x000000000026CAB4 string=0x000000000026CAB8 ")"
 *   insn=0x000000000026CAB8 string=0x000000000026CABC "\t\t"
 *   insn=0x000000000026CAC0 string=0x000000000026CAC4 "\t"
 *   insn=0x000000000026CAC4 string=0x000000000026CAC8 ")"
 *   insn=0x000000000026CACC string=0x000000000026CAD0 " "
 *   insn=0x000000000026CAD4 string=0x000000000026CAD8 "{S"
 *   insn=0x000000000026CADC string=0x000000000026CAE0 "(A"
 *   insn=0x000000000026CAE8 string=0x000000000026CB04 ""
 *   insn=0x000000000026CAEC string=0x000000000026CAF0 ""
 *   insn=0x000000000026CAF0 string=0x000000000026CAF4 "   "
 *   insn=0x000000000026CAF4 string=0x000000000026CAF8 " L "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::Update(Caver::EntityControllerComponent *this, long double a2)
{
  __int64 result; // x0
  __int64 v5; // x0
  float v6; // s0
  char v7; // w0
  _DWORD *v8; // x0
  int v9; // w8
  _QWORD *v10; // x0
  float32x2_t *v11; // x0
  int v12; // w8
  float32x2_t *v13; // x20
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x8
  float32x2_t *v17; // x2
  float32x2_t v18; // d0
  _DWORD *v19; // x8
  int v20; // w9
  int v21; // w8
  __int64 v22; // x8
  int v23; // w20
  __int64 v24; // x8
  float *v25; // x8
  float v26; // s0
  __int64 v27; // x8
  float v28; // s0
  __int64 v29; // x8
  float v30; // s9
  int v31; // w20
  float v32; // s0
  float *v33; // x8
  float v34; // s1
  float v35; // s0
  float v36; // s0
  Caver::EntityComponent *v37; // x0
  int v38; // w20
  __int64 v39; // x20
  __int64 v40; // x8
  int v41; // w21
  float v42; // s0
  float v43; // s0
  int v44; // w20
  __int64 v45; // x8
  __int64 v46; // x21
  __int64 v47; // x20
  __int64 v48; // x21
  char v49; // w23
  _QWORD *v50; // x0
  __int64 v51; // x8
  _QWORD *v52; // x21
  _QWORD *v53; // x23
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  _QWORD *v57; // x23
  _QWORD *i; // x24
  __int64 v59; // x8
  __int64 v60; // x0
  __int64 v61; // x0
  _QWORD *v62; // x23
  _QWORD *j; // x24
  __int64 v64; // x8
  __int64 v65; // x0
  __int64 v66; // x0
  _DWORD *v67; // x20
  _DWORD *v68; // x21
  _DWORD *v69; // x9
  void (__fastcall *v70)(float); // x8
  int v71; // w8
  __int64 v72; // x0
  int v73; // w21
  __int64 v74; // x23
  __int64 v75; // x20
  __int64 v76; // x8
  int v77; // w21
  float v78; // s9
  float v79; // s10
  float v80; // s1
  int v81; // w8
  float v82; // s0
  __int64 v83; // x8
  __int64 v84; // x21
  _DWORD *v85; // [xsp+0h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  if ( !*((_QWORD *)this + 16) )
  {
    result = Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
    if ( !*((_QWORD *)this + 16) )
      return result;
  }
  v5 = *((_QWORD *)this + 35);
  if ( !v5 )
  {
    v6 = *((float *)this + 73) + *(float *)&a2;
    *((float *)this + 73) = v6;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v5 + 200LL))(v5, a2);
  Caver::EntityActionComponent::IsFinished(*((Caver::EntityActionComponent **)this + 35));
  if ( (v7 & 1) == 0 )
    goto LABEL_11;
  v8 = (_DWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = 0;
  if ( v8 && (v9 = v8[2] - 1, (v8[2] = v9) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = (_QWORD *)*((_QWORD *)this + 19);
    if ( v10 )
      goto LABEL_121;
  }
  else
  {
    v10 = (_QWORD *)*((_QWORD *)this + 19);
    if ( v10 )
      goto LABEL_121;
  }
  Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 136), this);
  v10 = (_QWORD *)*((_QWORD *)this + 19);
  if ( !v10 )
    goto LABEL_11;
LABEL_121:
  v67 = (_DWORD *)v10[20];
  if ( v67 )
  {
    v68 = (_DWORD *)*((_QWORD *)this + 32);
    if ( v67[2] )
    {
      if ( v67 == v68 )
        goto LABEL_11;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v67 + 8LL))(v10[20]);
      if ( v67 == v68 )
        goto LABEL_11;
      v10 = (_QWORD *)*((_QWORD *)this + 19);
      if ( !v10 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 136), this);
        v10 = (_QWORD *)*((_QWORD *)this + 19);
      }
    }
  }
  else if ( !*((_QWORD *)this + 32) )
  {
    goto LABEL_11;
  }
  v69 = (_DWORD *)*((_QWORD *)this + 32);
  v70 = *(void (__fastcall **)(float))(*v10 + 264LL);
  v85 = v69;
  if ( v69 )
    ++v69[2];
  v70(0.08);
  if ( v85 )
  {
    v71 = v85[2] - 1;
    v85[2] = v71;
    if ( !v71 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v85 + 8LL))(v85);
      v11 = (float32x2_t *)*((_QWORD *)this + 30);
      if ( v11 )
        goto LABEL_12;
      goto LABEL_14;
    }
  }
LABEL_11:
  v11 = (float32x2_t *)*((_QWORD *)this + 30);
  if ( v11 )
  {
LABEL_12:
    if ( v11[4].n64_u64[0] )
      goto LABEL_34;
    *((_QWORD *)this + 30) = 0;
    v12 = v11[1].n64_u32[0] - 1;
    v11[1].n64_u32[0] = v12;
    if ( !v12 )
    {
      v11 = (float32x2_t *)(*(__int64 (__fastcall **)(float32x2_t *))(v11->n64_u64[0] + 8))(v11);
      if ( *((_QWORD *)this + 30) )
        goto LABEL_34;
    }
  }
LABEL_14:
  v6 = *((float *)this + 58);
  if ( v6 > 0.001 )
  {
    v11 = (float32x2_t *)Caver::ComponentManager::ComponentCollectionForInterface(
                           (Caver::ComponentManager *)(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL) + 384LL),
                           (__int64)Caver::HeroEntityComponent::Interface);
    v13 = v11;
    v14 = v11->n64_u64[0];
    v15 = v11[1].n64_u64[0];
    if ( v15 != v11->n64_u64[0] )
    {
      do
      {
        if ( *(_QWORD *)(*(_QWORD *)v14 + 40LL) )
          break;
        v14 += 8LL;
      }
      while ( v15 != v14 );
    }
    if ( v15 != v14 )
    {
      v16 = v11[1].n64_u64[0];
      do
      {
        v17 = (float32x2_t *)*((_QWORD *)this + 5);
        v11 = *(float32x2_t **)(*(_QWORD *)v14 + 40LL);
        v18.n64_u64[0] = vsub_f32(v17[14], v11[14]).n64_u64[0];
        v6 = vaddv_f32(vmul_f32(v18, v18));
        if ( v6 < (float)(*((float *)this + 58) * *((float *)this + 58)) )
        {
          if ( v11 )
            ++v11[1].n64_u32[0];
          v19 = (_DWORD *)*((_QWORD *)this + 30);
          *((_QWORD *)this + 30) = v11;
          if ( v19 )
          {
            v20 = v19[2] - 1;
            v19[2] = v20;
            if ( !v20 )
            {
              (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v19 + 8LL))(v19, v19);
              v11 = (float32x2_t *)*((_QWORD *)this + 30);
              v17 = (float32x2_t *)*((_QWORD *)this + 5);
            }
          }
          Caver::SceneObject::HandleMessage((Caver::SceneObject *)v11, 15, v17);
          v16 = v13[1].n64_u64[0];
        }
        for ( v14 += 8LL; v16 != v14; v14 += 8LL )
        {
          if ( *(_QWORD *)(*(_QWORD *)v14 + 40LL) )
            break;
        }
      }
      while ( v15 != v14 );
    }
  }
LABEL_34:
  v21 = *((_DWORD *)this + 62);
  switch ( v21 )
  {
    case 3:
      v27 = *((_QWORD *)this + 30);
      if ( !v27 )
        goto LABEL_59;
      v28 = *(float *)(v27 + 112);
      v29 = *((_QWORD *)this + 16);
      v30 = v28 - *(float *)(*((_QWORD *)this + 5) + 112LL);
      if ( v30 >= 0.0 )
        v31 = 1;
      else
        v31 = -1;
      if ( v29
        || (v11 = (float32x2_t *)Caver::ComponentOutletBase::Connect(
                                   (Caver::EntityControllerComponent *)((char *)this + 112),
                                   this),
            (v29 = *((_QWORD *)this + 16)) != 0) )
      {
        LODWORD(v29) = *(_DWORD *)(v29 + 112);
      }
      v32 = fabsf(v30);
      if ( v31 != (_DWORD)v29 )
      {
        if ( *((_DWORD *)this + 74) == v31 )
        {
          v33 = (float *)((char *)this + 304);
          v34 = fminf(*((float *)this + 76), 0.2);
        }
        else
        {
          v34 = 0.2;
          *((_DWORD *)this + 74) = v31;
          v33 = (float *)((char *)this + 304);
        }
        *v33 = v34;
      }
      if ( v32 >= 100.0 )
      {
        if ( v32 <= 100.0 )
        {
          v81 = *((_DWORD *)this + 66);
          v82 = 0.0;
          v31 = v81;
          if ( v81 )
            goto LABEL_155;
          goto LABEL_159;
        }
        v78 = 0.3;
        v79 = 1.5;
      }
      else
      {
        v78 = 0.1;
        v79 = 0.2;
        v31 = -v31;
      }
      v80 = (float)(int)Caver::fastrandom((Caver *)v11);
      v81 = *((_DWORD *)this + 66);
      v82 = v78 + (float)(v79 * (float)(v80 / (float)Caver::FASTRANDOM_MAX));
      if ( v81 )
      {
LABEL_155:
        if ( v81 != v31 && *((_DWORD *)this + 75) != v31 )
        {
          *((_DWORD *)this + 75) = v31;
          *((float *)this + 77) = v82;
        }
        break;
      }
LABEL_159:
      v83 = *((_QWORD *)this + 16);
      *((_DWORD *)this + 77) = 0;
      *((_DWORD *)this + 75) = v31;
      *((_DWORD *)this + 66) = v31;
      if ( !v83 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
        v83 = *((_QWORD *)this + 16);
        v31 = *((_DWORD *)this + 66);
      }
      *(float *)(v83 + 176) = *((float *)this + 67) * (float)v31;
      v84 = *((_QWORD *)this + 32);
      if ( v84 )
      {
        if ( !v83 )
        {
          Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
          v83 = *((_QWORD *)this + 16);
        }
        *(_BYTE *)(v84 + 57) = v31 != *(_DWORD *)(v83 + 112);
      }
      break;
    case 2:
      v22 = *((_QWORD *)this + 30);
      if ( v22 )
      {
        if ( (float)(*(float *)(v22 + 112) - *(float *)(*((_QWORD *)this + 5) + 112LL)) >= 0.0 )
          v23 = 1;
        else
          v23 = -1;
        if ( *((_DWORD *)this + 66) )
        {
          v24 = *((_QWORD *)this + 16);
          if ( v24
            || (Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this),
                (v24 = *((_QWORD *)this + 16)) != 0) )
          {
            LODWORD(v24) = *(_DWORD *)(v24 + 112);
          }
          if ( v23 != (_DWORD)v24 )
          {
            if ( *((_DWORD *)this + 74) == v23 )
            {
              v25 = (float *)((char *)this + 304);
              v26 = fminf(*((float *)this + 76), 0.3);
            }
            else
            {
              v26 = 0.3;
              *((_DWORD *)this + 74) = v23;
              v25 = (float *)((char *)this + 304);
            }
            *v25 = v26;
          }
          if ( v23 != *((_DWORD *)this + 66) )
          {
            if ( *((_DWORD *)this + 75) == v23 )
            {
              *((float *)this + 77) = fminf(*((float *)this + 77), 0.3);
            }
            else
            {
              *((_DWORD *)this + 75) = v23;
              *((_DWORD *)this + 77) = 1050253722;
            }
          }
        }
        else
        {
          v72 = *((_QWORD *)this + 16);
          v73 = v23;
          *((_DWORD *)this + 77) = 0;
          *((_DWORD *)this + 75) = v23;
          *((_DWORD *)this + 66) = v23;
          if ( !v72 )
          {
            Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
            v72 = *((_QWORD *)this + 16);
            v73 = *((_DWORD *)this + 66);
          }
          *(float *)(v72 + 176) = *((float *)this + 67) * (float)v73;
          v74 = *((_QWORD *)this + 32);
          if ( v74 )
          {
            if ( !v72 )
            {
              Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
              v72 = *((_QWORD *)this + 16);
            }
            *(_BYTE *)(v74 + 57) = v73 != *(_DWORD *)(v72 + 112);
          }
          *((_DWORD *)this + 76) = 0;
          *((_DWORD *)this + 74) = v23;
          if ( !v72 )
          {
            Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
            v72 = *((_QWORD *)this + 16);
          }
          Caver::EntityComponent::SetFacingDirection((Caver::EntityComponent *)v72, v23);
          v75 = *((_QWORD *)this + 32);
          if ( v75 )
          {
            v76 = *((_QWORD *)this + 16);
            v77 = *((_DWORD *)this + 66);
            if ( !v76 )
            {
              Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
              v76 = *((_QWORD *)this + 16);
            }
            *(_BYTE *)(v75 + 57) = v77 != *(_DWORD *)(v76 + 112);
          }
        }
        break;
      }
      goto LABEL_59;
    case 1:
LABEL_59:
      Caver::EntityControllerComponent::RoamUpdate(this, v6);
      break;
  }
  v35 = *((float *)this + 76);
  if ( v35 >= 0.001 && !*((_QWORD *)this + 35) )
  {
    v36 = v35 - *(float *)&a2;
    *((float *)this + 76) = v36;
    if ( v36 < 0.001 )
    {
      v37 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      v38 = *((_DWORD *)this + 74);
      *((_DWORD *)this + 76) = 0;
      if ( !v37 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
        v37 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      }
      Caver::EntityComponent::SetFacingDirection(v37, v38);
      v39 = *((_QWORD *)this + 32);
      if ( v39 )
      {
        v40 = *((_QWORD *)this + 16);
        v41 = *((_DWORD *)this + 66);
        if ( !v40 )
        {
          Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
          v40 = *((_QWORD *)this + 16);
        }
        *(_BYTE *)(v39 + 57) = v41 != *(_DWORD *)(v40 + 112);
      }
    }
  }
  v42 = *((float *)this + 77);
  if ( v42 >= 0.001 && !*((_QWORD *)this + 35) )
  {
    v43 = v42 - *(float *)&a2;
    *((float *)this + 77) = v43;
    if ( v43 < 0.001 )
    {
      v44 = *((_DWORD *)this + 75);
      v45 = *((_QWORD *)this + 16);
      *((_DWORD *)this + 77) = 0;
      *((_DWORD *)this + 66) = v44;
      if ( !v45 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
        v45 = *((_QWORD *)this + 16);
        v44 = *((_DWORD *)this + 66);
      }
      *(float *)(v45 + 176) = *((float *)this + 67) * (float)v44;
      v46 = *((_QWORD *)this + 32);
      if ( v46 )
      {
        if ( !v45 )
        {
          Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
          v45 = *((_QWORD *)this + 16);
        }
        *(_BYTE *)(v46 + 57) = v44 != *(_DWORD *)(v45 + 112);
      }
    }
  }
  v47 = *((_QWORD *)this + 39);
  v48 = *((_QWORD *)this + 40);
  if ( v47 != v48 )
  {
    v49 = 0;
    do
    {
      v50 = *(_QWORD **)v47;
      if ( *(_QWORD *)(*(_QWORD *)v47 + 40LL) )
      {
        v51 = v50[19];
        if ( v51 && *(_BYTE *)(v51 + 368) )
          v49 = 1;
        else
          (*(void (__fastcall **)(_QWORD *, long double))(*v50 + 200LL))(v50, a2);
      }
      v47 += 8;
    }
    while ( v48 != v47 );
    if ( (v49 & 1) != 0 )
    {
      v52 = (_QWORD *)*((_QWORD *)this + 39);
      v53 = (_QWORD *)*((_QWORD *)this + 40);
      for ( *(float *)&a2 = *(float *)&a2 / 3.0; v53 != v52; ++v52 )
      {
        v54 = *(_QWORD *)(*v52 + 152LL);
        if ( v54 && *(_BYTE *)(v54 + 368) )
          (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*v52 + 200LL))(*v52, a2);
      }
      v55 = *((_QWORD *)this + 16);
      if ( !v55 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
        v55 = *((_QWORD *)this + 16);
      }
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v55 + 200LL))(v55, a2);
      v56 = *((_QWORD *)this + 19);
      if ( !v56 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 136), this);
        v56 = *((_QWORD *)this + 19);
      }
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v56 + 200LL))(v56, a2);
      v57 = (_QWORD *)*((_QWORD *)this + 39);
      for ( i = (_QWORD *)*((_QWORD *)this + 40); i != v57; ++v57 )
      {
        v59 = *(_QWORD *)(*v57 + 152LL);
        if ( v59 && *(_BYTE *)(v59 + 368) )
          (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*v57 + 200LL))(*v57, a2);
      }
      v60 = *((_QWORD *)this + 16);
      if ( !v60 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
        v60 = *((_QWORD *)this + 16);
      }
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v60 + 200LL))(v60, a2);
      v61 = *((_QWORD *)this + 19);
      if ( !v61 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 136), this);
        v61 = *((_QWORD *)this + 19);
      }
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v61 + 200LL))(v61, a2);
      v62 = (_QWORD *)*((_QWORD *)this + 39);
      for ( j = (_QWORD *)*((_QWORD *)this + 40); j != v62; ++v62 )
      {
        v64 = *(_QWORD *)(*v62 + 152LL);
        if ( v64 && *(_BYTE *)(v64 + 368) )
          (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*v62 + 200LL))(*v62, a2);
      }
      v65 = *((_QWORD *)this + 16);
      if ( !v65 )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
        v65 = *((_QWORD *)this + 16);
      }
      (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v65 + 200LL))(v65, a2);
      result = *((_QWORD *)this + 19);
      if ( !result )
      {
        Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 136), this);
        result = *((_QWORD *)this + 19);
      }
      return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
    }
  }
  v66 = *((_QWORD *)this + 16);
  if ( !v66 )
  {
    Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
    v66 = *((_QWORD *)this + 16);
  }
  (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v66 + 200LL))(v66, a2);
  result = *((_QWORD *)this + 19);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 136), this);
  result = *((_QWORD *)this + 19);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  return result;
}

