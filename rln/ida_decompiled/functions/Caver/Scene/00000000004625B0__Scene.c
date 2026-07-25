/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004625B0
 * Mangled: _ZN5Caver5SceneC2Ev
 * Demangled: Caver::Scene::Scene(void)
 *
 * Callers: 1
 *   0x0000000000201510  Caver::Scene::Scene(void)
 *
 * Callees: 50
 *   0x00000000001F3EA0  boost::detail::shared_count::shared_count<Caver::ObjectLibrary>(Caver::ObjectLibrary *)
 *   0x00000000001F4970  Caver::ProgramState::~ProgramState()
 *   0x00000000001F4BF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>> *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9360  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_erase(std::_Rb_tree_node<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>> *)
 *   0x00000000001F9EF0  Caver::ComponentManager::ComponentManager(void)
 *   0x00000000001FA300  Caver::Scene::RegisterLibrary(void)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC6B0  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FD300  Caver::ComponentManager::ManageInterface(long)
 *   0x00000000001FD640  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FE2C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *   0x00000000001FEDC0  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000001FF7A0  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *   0x00000000001FFF60  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x0000000000200190  Caver::SceneGrid::AddLayer(float,float,float,float)
 *   0x0000000000200560  Caver::VertexArrayObject::~VertexArrayObject()
 *   0x0000000000202720  Caver::SceneGrid::~SceneGrid()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203050  Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState *)
 *   0x0000000000203060  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000203B30  Caver::LightOverlay::LightOverlay(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x000000000021E330  Caver::BackgroundComponent::Interface(void)
 *   0x00000000002237C0  Caver::LightComponent::className(void)
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *   0x0000000000236424  Caver::ShadowComponent::className(void)
 *   0x0000000000236CA8  Caver::ShadowVolumeComponent::className(void)
 *   0x000000000023CC4C  Caver::SpriteComponent::className(void)
 *   0x000000000023DCF0  Caver::TextBubbleComponent::className(void)
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *   0x0000000000281DFC  Caver::DimensionObjectComponent::className(void)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002C3458  Caver::WaterMeshComponent::Interface(void)
 *   0x00000000002C76AC  Caver::WeaponTrailComponent::Interface(void)
 *   0x0000000000462DA0  Caver::IUpdateable::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 238
 *   insn=0x00000000004625D0 string=0x00000000004625D4 ""
 *   insn=0x00000000004625D4 string=0x00000000004625D8 "Z"
 *   insn=0x00000000004625D8 string=0x00000000004625DC ""
 *   insn=0x00000000004625DC string=0x00000000004625E0 "I"
 *   insn=0x00000000004625E8 string=0x00000000004625EC "t"
 *   insn=0x00000000004625EC string=0x00000000004625F0 "A"
 *   insn=0x00000000004625F4 string=0x00000000004625F8 "h"
 *   insn=0x00000000004625F8 string=0x00000000004625FC "j\n"
 *   insn=0x000000000046260C string=0x0000000000462610 "Tv"
 *   insn=0x0000000000462624 string=0x0000000000462628 "\nA"
 *   insn=0x0000000000462628 string=0x000000000046262C " "
 *   insn=0x000000000046262C string=0x0000000000462630 ""
 *   insn=0x0000000000462640 string=0x0000000000462644 "\n)"
 *   insn=0x0000000000462644 string=0x0000000000462648 "\t"
 *   insn=0x0000000000462648 string=0x000000000046264C "\t"
 *   insn=0x0000000000462660 string=0x0000000000462664 "!"
 *   insn=0x0000000000462670 string=0x0000000000462674 "q"
 *   insn=0x0000000000462680 string=0x0000000000462684 "^"
 *   insn=0x0000000000462684 string=0x0000000000462688 "v"
 *   insn=0x0000000000462684 string=0x00000000001F9EF0 "0'"
 *   insn=0x0000000000462694 string=0x0000000000462698 ""
 *   insn=0x0000000000462698 string=0x000000000046269C "`b\t"
 *   insn=0x000000000046269C string=0x00000000004626A0 "`"
 *   insn=0x00000000004626A0 string=0x00000000004626A4 "hR"
 *   insn=0x00000000004626A4 string=0x00000000004626A8 """
 *   insn=0x00000000004626A8 string=0x00000000004626AC "i"
 *   insn=0x00000000004626AC string=0x00000000004626B0 "w"
 *   insn=0x00000000004626B0 string=0x00000000004626B4 "h"
 *   insn=0x00000000004626B8 string=0x00000000004626BC "i""
 *   insn=0x00000000004626C0 string=0x00000000004626C4 """
 *   insn=0x00000000004626CC string=0x00000000004626D0 "x"
 *   insn=0x00000000004626D8 string=0x00000000004626DC "`"
 *   insn=0x00000000004626E8 string=0x00000000004626EC " "
 *   insn=0x00000000004626EC string=0x00000000004626F0 "Te"
 *   insn=0x00000000004626F0 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004626F8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004626FC string=0x0000000000462700 ""
 *   insn=0x0000000000462700 string=0x0000000000462704 ""
 *   insn=0x0000000000462708 string=0x000000000046270C " "
 *   insn=0x000000000046270C string=0x0000000000462710 "B\t"
 *   insn=0x0000000000462710 string=0x0000000000462714 "a"
 *   insn=0x0000000000462714 string=0x0000000000462718 "("
 *   insn=0x0000000000462718 string=0x000000000046271C "?"
 *   insn=0x0000000000462720 string=0x0000000000462724 "?"
 *   insn=0x0000000000462724 string=0x0000000000462728 ")"
 *   insn=0x0000000000462728 string=0x000000000046272C "Ee"
 *   insn=0x0000000000462740 string=0x00000000001F3EA0 "P'"
 *   insn=0x0000000000462750 string=0x0000000000462754 "hfJ"
 *   insn=0x0000000000462760 string=0x0000000000462764 "i"\n"
 *   insn=0x0000000000462768 string=0x000000000046276C "9"
 *   insn=0x000000000046276C string=0x0000000000462770 "(@"
 *   insn=0x0000000000462770 string=0x0000000000462774 ""
 *   insn=0x0000000000462774 string=0x0000000000462778 "("
 *   insn=0x000000000046277C string=0x0000000000462780 "("
 *   insn=0x0000000000462780 string=0x0000000000462784 "\t@"
 *   insn=0x000000000046278C string=0x0000000000462790 "(@"
 *   insn=0x0000000000462790 string=0x0000000000462794 ""
 *   insn=0x0000000000462794 string=0x0000000000462798 "("
 *   insn=0x000000000046279C string=0x00000000004627A0 "("
 *   insn=0x00000000004627A0 string=0x00000000004627A4 "@"
 *   insn=0x00000000004627B0 string=0x00000000001FC6B0 "0'"
 *   insn=0x00000000004627B4 string=0x00000000004627B8 "!"
 *   insn=0x00000000004627C0 string=0x00000000004627C4 "!"
 *   insn=0x00000000004627C0 string=0x00000000001FD300 "0'"
 *   insn=0x00000000004627C4 string=0x00000000004627C8 "!xC"
 *   insn=0x00000000004627C8 string=0x0000000000281E54 " #"
 *   insn=0x00000000004627D0 string=0x00000000004627D4 "!"
 *   insn=0x00000000004627D4 string=0x00000000004627D8 "!tD"
 *   insn=0x00000000004627E4 string=0x00000000004627E8 "!"
 *   insn=0x00000000004627F4 string=0x00000000004627F8 "!lA"
 *   insn=0x00000000004627F8 string=0x000000000021E330 " &"
 *   insn=0x0000000000462804 string=0x0000000000462808 "!lF"
 *   insn=0x0000000000462814 string=0x0000000000462818 "!LA"
 *   insn=0x0000000000462824 string=0x0000000000462828 "!\F"
 *   insn=0x0000000000462828 string=0x0000000000236D00 "`%"
 *   insn=0x0000000000462834 string=0x0000000000462838 "!"
 *   insn=0x0000000000462838 string=0x000000000023647C "`%"
 *   insn=0x0000000000462840 string=0x0000000000462844 "!"
 *   insn=0x0000000000462844 string=0x0000000000462848 "!"
 *   insn=0x0000000000462848 string=0x000000000021C130 "@&"
 *   insn=0x0000000000462850 string=0x0000000000462854 "!"
 *   insn=0x0000000000462854 string=0x0000000000462858 "!LB"
 *   insn=0x0000000000462858 string=0x00000000002C3458 " !"
 *   insn=0x0000000000462860 string=0x0000000000462864 "!"
 *   insn=0x0000000000462864 string=0x0000000000462868 "!"
 *   insn=0x0000000000462868 string=0x000000000023CCA4 "@%"
 *   insn=0x0000000000462870 string=0x0000000000462874 "!"
 *   insn=0x0000000000462874 string=0x0000000000462878 "!0D"
 *   insn=0x0000000000462880 string=0x0000000000462884 "!"
 *   insn=0x0000000000462884 string=0x0000000000462888 "!"
 *   insn=0x0000000000462894 string=0x0000000000462898 "!"
 *   insn=0x00000000004628A0 string=0x00000000004628A4 "!"
 *   insn=0x00000000004628A4 string=0x00000000004628A8 "!"
 *   insn=0x00000000004628B0 string=0x00000000004628B4 "!"
 *   insn=0x00000000004628B4 string=0x00000000004628B8 "!4E"
 *   insn=0x00000000004628C0 string=0x00000000004628C4 "!"
 *   insn=0x00000000004628C4 string=0x00000000004628C8 "!(B"
 *   insn=0x00000000004628C8 string=0x000000000021C13C "@&"
 *   insn=0x00000000004628D0 string=0x00000000004628D4 "!"
 *   insn=0x00000000004628D4 string=0x00000000004628D8 "!"
 *   insn=0x00000000004628E0 string=0x00000000004628E4 "!"
 *   insn=0x00000000004628E4 string=0x00000000004628E8 "!|A"
 *   insn=0x00000000004628E8 string=0x000000000023E174 "@%"
 *   insn=0x00000000004628F0 string=0x00000000004628F4 "!"
 *   insn=0x00000000004628F4 string=0x00000000004628F8 "!tD"
 *   insn=0x0000000000462904 string=0x0000000000462908 "!"
 *   insn=0x0000000000462908 string=0x000000000023DD48 " %"
 *   insn=0x000000000046290C string=0x0000000000462910 "|j"
 *   insn=0x0000000000462918 string=0x000000000046291C "`&"
 *   insn=0x000000000046291C string=0x0000000000462920 "(\t"
 *   insn=0x0000000000462920 string=0x0000000000462924 "*\t"
 *   insn=0x0000000000462924 string=0x0000000000462928 ")\t"
 *   insn=0x0000000000462928 string=0x000000000046292C "qA"
 *   insn=0x000000000046292C string=0x0000000000462930 "B9F"
 *   insn=0x0000000000462930 string=0x0000000000462934 "!}I"
 *   insn=0x000000000046293C string=0x0000000000462940 "C"
 *   insn=0x0000000000462944 string=0x0000000000462948 ")\t"
 *   insn=0x000000000046294C string=0x0000000000462950 ""yI"
 *   insn=0x000000000046295C string=0x0000000000462960 "C"
 *   insn=0x0000000000462960 string=0x0000000000462964 "v"
 *   insn=0x0000000000462964 string=0x0000000000462968 "(\t"
 *   insn=0x0000000000462978 string=0x000000000046297C "C"
 *   insn=0x0000000000462984 string=0x0000000000462988 "^^"
 *   insn=0x0000000000462988 string=0x00000000001FA300 "0'"
 *   insn=0x000000000046298C string=0x00000000001FD0C0 "0'"
 *   insn=0x0000000000462990 string=0x0000000000462994 "q"
 *   insn=0x0000000000462994 string=0x0000000000462998 "fm"
 *   insn=0x0000000000462998 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000004629AC string=0x00000000004629B0 "H"
 *   insn=0x00000000004629B8 string=0x00000000004629BC "A"
 *   insn=0x00000000004629BC string=0x00000000004629E4 ";N"
 *   insn=0x00000000004629E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004629E8 string=0x00000000004629EC "x&A"
 *   insn=0x00000000004629F0 string=0x00000000004629F4 "T"
 *   insn=0x00000000004629F0 string=0x0000000000462B04 "@"
 *   insn=0x00000000004629F4 string=0x0000000000462B44 "a"
 *   insn=0x00000000004629F8 string=0x00000000004629FC "X"
 *   insn=0x00000000004629FC string=0x0000000000462B5C "a"
 *   insn=0x0000000000462A00 string=0x0000000000462A04 "\"
 *   insn=0x0000000000462A08 string=0x0000000000462A0C "s"
 *   insn=0x0000000000462A0C string=0x0000000000462A10 "3"
 *   insn=0x0000000000462A10 string=0x0000000000462A14 "h"
 *   insn=0x0000000000462A14 string=0x0000000000462A18 ""
 *   insn=0x0000000000462A18 string=0x0000000000462A1C "h"
 *   insn=0x0000000000462A20 string=0x0000000000462A24 "h"
 *   insn=0x0000000000462A24 string=0x0000000000462A28 "\t@"
 *   insn=0x0000000000462A30 string=0x0000000000462A34 "h\n@"
 *   insn=0x0000000000462A34 string=0x0000000000462A38 ""
 *   insn=0x0000000000462A38 string=0x0000000000462A3C "h\n"
 *   insn=0x0000000000462A40 string=0x0000000000462A44 "h"
 *   insn=0x0000000000462A44 string=0x0000000000462A48 "@"
 *   insn=0x0000000000462A58 string=0x0000000000462A5C "h"
 *   insn=0x0000000000462A68 string=0x0000000000462A6C "h"
 *   insn=0x0000000000462A70 string=0x0000000000462A74 ";I"
 *   insn=0x0000000000462A74 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000462A78 string=0x0000000000462A7C ")"
 *   insn=0x0000000000462A80 string=0x0000000000462A84 "'"
 *   insn=0x0000000000462A84 string=0x0000000000462A88 "x"
 *   insn=0x0000000000462A88 string=0x0000000000462A8C "y"
 *   insn=0x0000000000462A94 string=0x0000000000462AD0 "x"
 *   insn=0x0000000000462A9C string=0x0000000000462AA0 "@"
 *   insn=0x0000000000462AA0 string=0x0000000000462AA4 ""
 *   insn=0x0000000000462AA4 string=0x0000000000462AA8 ""
 *   insn=0x0000000000462AAC string=0x0000000000462AB0 ""
 *   insn=0x0000000000462AB0 string=0x0000000000462AB4 ""
 *   insn=0x0000000000462ABC string=0x0000000000462AC0 "?"
 *   insn=0x0000000000462AD0 string=0x0000000000462ADC "`zA"
 *   insn=0x0000000000462AD8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000462ADC string=0x0000000000462AE0 "@"
 *   insn=0x0000000000462AE0 string=0x0000000000462AE8 "`"
 *   insn=0x0000000000462AEC string=0x0000000000462AF0 "`BA"
 *   insn=0x0000000000462AF0 string=0x0000000000462AF4 "@"
 *   insn=0x0000000000462AF4 string=0x0000000000462AFC "x&A"
 *   insn=0x0000000000462AFC string=0x0000000000462B00 "8"
 *   insn=0x0000000000462B04 string=0x0000000000462B08 ""
 *   insn=0x0000000000462B08 string=0x0000000000462B0C ""
 *   insn=0x0000000000462B10 string=0x0000000000462B14 ""
 *   insn=0x0000000000462B14 string=0x0000000000462B18 "\t@"
 *   insn=0x0000000000462B20 string=0x0000000000462B24 "@"
 *   insn=0x0000000000462B24 string=0x0000000000462B28 ""
 *   insn=0x0000000000462B28 string=0x0000000000462B2C ""
 *   insn=0x0000000000462B30 string=0x0000000000462B34 ""
 *   insn=0x0000000000462B34 string=0x0000000000462B38 "@"
 *   insn=0x0000000000462B44 string=0x0000000000462B48 "`B"
 *   insn=0x0000000000462B4C string=0x0000000000462B50 "a"
 *   insn=0x0000000000462B4C string=0x00000000001F9360 "0'"
 *   insn=0x0000000000462B5C string=0x0000000000462B60 "`"
 *   insn=0x0000000000462B64 string=0x0000000000462B68 "a"
 *   insn=0x0000000000462B7C string=0x0000000000462BBC "u"
 *   insn=0x0000000000462B88 string=0x0000000000462B8C "@"
 *   insn=0x0000000000462B8C string=0x0000000000462B90 ""
 *   insn=0x0000000000462B90 string=0x0000000000462B94 ""
 *   insn=0x0000000000462B98 string=0x0000000000462B9C ""
 *   insn=0x0000000000462B9C string=0x0000000000462BA0 ""
 *   insn=0x0000000000462BB4 string=0x0000000000462BB8 "A"
 *   insn=0x0000000000462BC4 string=0x0000000000462C04 "a"
 *   insn=0x0000000000462BD0 string=0x0000000000462BD4 "@"
 *   insn=0x0000000000462BD4 string=0x0000000000462BD8 ""
 *   insn=0x0000000000462BD8 string=0x0000000000462BDC ""
 *   insn=0x0000000000462BE0 string=0x0000000000462BE4 ""
 *   insn=0x0000000000462BE4 string=0x0000000000462BE8 ""
 *   insn=0x0000000000462BFC string=0x0000000000462C00 "A"
 *   insn=0x0000000000462C04 string=0x0000000000462C08 "`"
 *   insn=0x0000000000462C0C string=0x0000000000462C10 "`"
 *   insn=0x0000000000462C0C string=0x00000000001FD640 "0'"
 *   insn=0x0000000000462C10 string=0x0000000000462C14 "@"
 *   insn=0x0000000000462C28 string=0x0000000000462C68 "az@"
 *   insn=0x0000000000462C34 string=0x0000000000462C38 "@"
 *   insn=0x0000000000462C38 string=0x0000000000462C3C ""
 *   insn=0x0000000000462C3C string=0x0000000000462C40 ""
 *   insn=0x0000000000462C44 string=0x0000000000462C48 ""
 *   insn=0x0000000000462C48 string=0x0000000000462C4C ""
 *   insn=0x0000000000462C60 string=0x0000000000462C64 "A"
 *   insn=0x0000000000462C68 string=0x0000000000462C6C "`"
 *   insn=0x0000000000462C70 string=0x0000000000462C74 "ab@"
 *   insn=0x0000000000462C74 string=0x0000000000462C78 "`"
 *   insn=0x0000000000462C7C string=0x0000000000462C80 "uV@"
 *   insn=0x0000000000462C7C string=0x00000000001F4BF0 "P'"
 *   insn=0x0000000000462C80 string=0x0000000000462C84 "5"
 *   insn=0x0000000000462C84 string=0x0000000000462CC8 "uF@"
 *   insn=0x0000000000462C88 string=0x0000000000462C8C ""
 *   insn=0x0000000000462C98 string=0x0000000000462C9C "\t@"
 *   insn=0x0000000000462CA8 string=0x0000000000462CAC ""
 *   insn=0x0000000000462CB8 string=0x0000000000462CBC "@"
 *   insn=0x0000000000462CC8 string=0x0000000000462CCC "5"
 *   insn=0x0000000000462CD0 string=0x0000000000462CD4 ""
 *   insn=0x0000000000462CE0 string=0x0000000000462CE4 "\t@"
 *   insn=0x0000000000462CF0 string=0x0000000000462CF4 ""
 *   insn=0x0000000000462D00 string=0x0000000000462D04 "@"
 *   insn=0x0000000000462D14 string=0x0000000000462D18 "="
 *   insn=0x0000000000462D14 string=0x00000000001F4970 "P'"
 *   insn=0x0000000000462D34 string=0x0000000000462D38 "a"
 *   insn=0x0000000000462D4C string=0x0000000000462D50 "a"
 *   insn=0x0000000000462D64 string=0x0000000000462D68 ""
 *   insn=0x0000000000462D78 string=0x0000000000462D7C ""
 *   insn=0x0000000000462D84 string=0x0000000000462D88 "JQ"
 *   insn=0x0000000000462D8C string=0x0000000000462D90 "o"
 *   insn=0x0000000000462D98 string=0x0000000000462D9C "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::Scene(Caver::Scene *this)
{
  Caver::ProgramState *v2; // x20
  _QWORD *v3; // x25
  Caver::DefaultComponents *v4; // x0
  _QWORD *v5; // x25
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::SoundLibrary *v8; // x0
  Caver::SoundLibrary *v9; // x0
  Caver::AudioSystem *v10; // x0
  __int64 v11; // x0
  Caver::ProgramState *v12; // x1
  _QWORD *v14; // [xsp+18h] [xbp-78h]
  __int64 v15; // [xsp+20h] [xbp-70h]

  v2 = (Caver::Scene *)((char *)this + 40);
  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D4958;
  *((_DWORD *)this + 2) = 256;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0;
  Caver::ProgramState::ProgramState((Caver::Scene *)((char *)this + 40), 0);
  *((_QWORD *)this + 29) = 0;
  *(_OWORD *)((char *)this + 184) = 0u;
  *(_OWORD *)((char *)this + 200) = 0u;
  *(_OWORD *)((char *)this + 312) = 0u;
  *(_OWORD *)((char *)this + 328) = 0u;
  *((_QWORD *)this + 41) = (char *)this + 312;
  *((_QWORD *)this + 42) = (char *)this + 312;
  *((_QWORD *)this + 25) = (char *)this + 184;
  *((_QWORD *)this + 26) = (char *)this + 184;
  *((_QWORD *)this + 27) = 0;
  *((_OWORD *)this + 10) = 0u;
  *((_OWORD *)this + 9) = 0u;
  *((_OWORD *)this + 8) = 0u;
  *((_OWORD *)this + 15) = 0u;
  *((_OWORD *)this + 16) = 0u;
  *((_QWORD *)this + 31) = (char *)this + 232;
  *((_QWORD *)this + 32) = (char *)this + 232;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_OWORD *)this + 18) = 0u;
  *((_QWORD *)this + 43) = 0;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 46) = (char *)this + 368;
  *((_QWORD *)this + 47) = (char *)this + 368;
  Caver::ComponentManager::ComponentManager((Caver::Scene *)((char *)this + 384));
  Caver::ComponentManager::ComponentManager((Caver::Scene *)((char *)this + 480));
  *((_OWORD *)this + 36) = 0u;
  *((_DWORD *)this + 148) = -1;
  Caver::LightOverlay::LightOverlay((Caver::Scene *)((char *)this + 600));
  *(_OWORD *)((char *)this + 812) = 0u;
  *((_BYTE *)this + 1028) = 0;
  *((_OWORD *)this + 49) = 0u;
  *((_DWORD *)this + 200) = 0;
  *((_BYTE *)this + 856) = 0;
  *((_QWORD *)this + 104) = 0;
  *(_OWORD *)((char *)this + 840) = 0u;
  memset((char *)this + 864, 0, 0x91u);
  v3 = (_QWORD *)operator new(0x88u);
  *v3 = &byte_6FD2F8;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = v3 + 2;
  v3[5] = v3 + 2;
  v3[6] = 0;
  memset(v3 + 7, 0, 0x4Au);
  v14 = v3;
  boost::detail::shared_count::shared_count<Caver::ObjectLibrary>();
  boost::detail::sp_enable_shared_from_this();
  v5 = (_QWORD *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 20) = v14;
  *((_QWORD *)this + 21) = v15;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      v4 = (Caver::DefaultComponents *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        v4 = (Caver::DefaultComponents *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  Caver::DefaultComponents::RegisterAll(v4);
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 384));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 384));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 384));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  Caver::ComponentManager::ManageInterface((Caver::Scene *)((char *)this + 480));
  *((_OWORD *)this + 9) = xmmword_595BC0;
  Caver::SceneGrid::AddLayer((Caver::Scene *)((char *)this + 864), -300.0, 300.0, 250.0, 250.0);
  Caver::SceneGrid::AddLayer((Caver::Scene *)((char *)this + 864), -3000.0, -300.0, 1000.0, 1000.0);
  Caver::SceneGrid::AddLayer((Caver::Scene *)((char *)this + 928), 0.0, 0.0, 150.0, 150.0);
  v8 = (Caver::SoundLibrary *)Caver::Scene::RegisterLibrary(this);
  Caver::SoundLibrary::sharedLibrary(v8);
  v10 = (Caver::AudioSystem *)Caver::SoundLibrary::RegisterProgramLibrary(v9, v2);
  v11 = Caver::AudioSystem::sharedSystem(v10);
  Caver::MusicPlayer::RegisterProgramLibrary(*(Caver::MusicPlayer **)(v11 + 104), v2);
  return Caver::SceneObjectLib::RegisterLibrary(v2, v12);
}

