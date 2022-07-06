#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,IState>
struct Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,IState>
struct KeyCollection_tAB62B0263EDC45CFB38AC364F8D1766E044903E2;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,IState>
struct ValueCollection_t228A72B714FB2D61AC16CB629E1F9AFF26929D3C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,IState>[]
struct EntryU5BU5D_tC5BF4E8EB78A8221A4DD21A6BB7FDE53130B853B;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AttackState
struct AttackState_t7464014753840D8476E41DC181CE78F6AE16707B;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraMove
struct CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChatSceneController
struct ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ConsoleObject
struct ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DestroyTimer
struct DestroyTimer_tD067E7BA269D0168568CE0FAFC69841E4743DAA8;
// Effects
struct Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ExampleFSM
struct ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1;
// FalconNPC
struct FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gun
struct Gun_t5F4B94D558A9EF4F3074DC102D99870D0AC897BE;
// Human
struct Human_t30387D2A1A4AC2745EF3DB3EE13FE7614DA9B171;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IState
struct IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// IdleState
struct IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE;
// MoveState
struct MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7;
// UnityEngine.PlatformEffector2D
struct PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerInfo
struct PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneFade
struct SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D;
// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20;
// TitleSceneController
struct TitleSceneController_t985A0A65C469CB2E3AF9626DE53A0C5F393D96C2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TwinkleEffect
struct TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// ChatSceneController/<ChatSystem>d__11
struct U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A;
// ChatSceneController/<NormalChat>d__12
struct U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF;
// ExampleFSM/<Fall>d__11
struct U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2;
// ExampleFSM/<Idle>d__13
struct U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA;
// ExampleFSM/<Jump>d__10
struct U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139;
// ExampleFSM/<Land>d__12
struct U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2;
// ExampleFSM/<Walk>d__9
struct U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A;
// FalconNPC/<MoveVertical>d__9
struct U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MoveState/<Dash>d__28
struct U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E;
// MoveState/<Jump>d__29
struct U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471;
// MoveState/<Walk>d__27
struct U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26;
// Timer/<timer>d__3
struct U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69;
// TwinkleEffect/<Fade>d__4
struct U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD;
// TwinkleEffect/<Twinkle>d__3
struct U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD;

IL2CPP_EXTERN_C RuntimeClass* AttackState_t7464014753840D8476E41DC181CE78F6AE16707B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28;
IL2CPP_EXTERN_C String_t* _stringLiteral3512AE59830B704F34901B2998D5A244F77D4EDC;
IL2CPP_EXTERN_C String_t* _stringLiteral3A9CBED6AC1CE0AB32622691D0E7450E60D65318;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral4205E1BB14D776D93542524AA9865792CFDF9031;
IL2CPP_EXTERN_C String_t* _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73;
IL2CPP_EXTERN_C String_t* _stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral54364BB4B2924C75891E88C93F3FD709FEAEA07E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F;
IL2CPP_EXTERN_C String_t* _stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72;
IL2CPP_EXTERN_C String_t* _stringLiteral640C321D21DB0FC277C16205356FBF50C3EFF5EE;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7ADD85BD02EB360253CC358034C3A4C46DBBC235;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18;
IL2CPP_EXTERN_C String_t* _stringLiteral88ABBB2DD2D448C7C75A6ABCBFE514575AFA71D1;
IL2CPP_EXTERN_C String_t* _stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB;
IL2CPP_EXTERN_C String_t* _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralB3E660482C7C908E77A91D3F8E54330DC27D7D9F;
IL2CPP_EXTERN_C String_t* _stringLiteralB923DC9F73366D5C321730EC36587E83AD46798C;
IL2CPP_EXTERN_C String_t* _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB7AC607606B85C1EA7156B8ACA9EF6A0C68E59C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF476F51FEA9DC82535522D85B6E9D68C49D9A94C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7AC143DDDB8487C9E02C4C58A298BFA181DFCB1;
IL2CPP_EXTERN_C String_t* _stringLiteralFBE0C20FE941A79E77D67CF752C87CD993CDA39C;
IL2CPP_EXTERN_C String_t* _stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3_mA0694A48E69C1B9F20C146FAFD895C24A08F9E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8BF61FB0D8A2BFF4BA1E7CAC6E0365D9E91C95B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0618949A68A2022E37C0566CDB0115C74243568E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChatSystemU3Ed__11_System_Collections_IEnumerator_Reset_mB71BC946D8E287501C5FB97426D52EC3F5C0B508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDashU3Ed__28_System_Collections_IEnumerator_Reset_mE02196650AAAFA697FA07E53C94FDFAD42BE0F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__4_System_Collections_IEnumerator_Reset_m05677F3A88D5784B0D5EE3B428CCB26091E82012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFallU3Ed__11_System_Collections_IEnumerator_Reset_m00604BDA4EEE431DC6753FFAEECFE919916026B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIdleU3Ed__13_System_Collections_IEnumerator_Reset_m9B4D8E1EEB0918AFFADCBA1F627CE8E2A078E64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpU3Ed__10_System_Collections_IEnumerator_Reset_m04F5E9DA3E3521F349F7E4088E236F46BB39F8DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpU3Ed__29_System_Collections_IEnumerator_Reset_mE3C6BF8890428D8C67F1E26F8E57B86FDADEDE36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLandU3Ed__12_System_Collections_IEnumerator_Reset_mBAD8FE289859C66F5D9C16471B6DF38A788DA2A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveVerticalU3Ed__9_System_Collections_IEnumerator_Reset_m4FACCD1047E6CB4E88DB29E693CD405F5768399C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNormalChatU3Ed__12_System_Collections_IEnumerator_Reset_mFBC98551CCA30E964C5E9EB9956E4932A7BDFA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTwinkleU3Ed__3_System_Collections_IEnumerator_Reset_m3394A3EAD3E47EB6B3FD7208164BF6A90016BB25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWalkU3Ed__27_System_Collections_IEnumerator_Reset_mF9F306B0FB16104774B50C5A496A8B666EDDF151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWalkU3Ed__9_System_Collections_IEnumerator_Reset_mBFE29F195C7B414FC60A776B3F8F7F34A4FDC91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtimerU3Ed__3_System_Collections_IEnumerator_Reset_m0F767B340A527EF4861209061321C728E44BC632_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,IState>
struct Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC5BF4E8EB78A8221A4DD21A6BB7FDE53130B853B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAB62B0263EDC45CFB38AC364F8D1766E044903E2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t228A72B714FB2D61AC16CB629E1F9AFF26929D3C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// AttackState
struct AttackState_t7464014753840D8476E41DC181CE78F6AE16707B  : public RuntimeObject
{
	// Player AttackState::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_0;
	// UnityEngine.GameObject AttackState::playerGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerGO_1;
	// UnityEngine.Animator AttackState::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_2;
	// UnityEngine.SpriteRenderer AttackState::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_3;
	// System.Int32 AttackState::atkNum
	int32_t ___atkNum_4;
	// System.Single AttackState::curTime
	float ___curTime_5;
	// System.Single AttackState::coolTime
	float ___coolTime_6;
	// System.Boolean AttackState::ableCombo
	bool ___ableCombo_7;
};

// IdleState
struct IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5  : public RuntimeObject
{
	// Player IdleState::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_0;
	// UnityEngine.Animator IdleState::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_1;
	// UnityEngine.Rigidbody2D IdleState::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_2;
	// UnityEngine.SpriteRenderer IdleState::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_3;
	// System.Boolean IdleState::isDown
	bool ___isDown_4;
};

// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ChatSceneController/<ChatSystem>d__11
struct U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A  : public RuntimeObject
{
	// System.Int32 ChatSceneController/<ChatSystem>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ChatSceneController/<ChatSystem>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ChatSceneController ChatSceneController/<ChatSystem>d__11::<>4__this
	ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* ___U3CU3E4__this_2;
};

// ChatSceneController/<NormalChat>d__12
struct U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF  : public RuntimeObject
{
	// System.Int32 ChatSceneController/<NormalChat>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ChatSceneController/<NormalChat>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ChatSceneController ChatSceneController/<NormalChat>d__12::<>4__this
	ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* ___U3CU3E4__this_2;
	// System.String ChatSceneController/<NormalChat>d__12::narrator
	String_t* ___narrator_3;
	// System.String ChatSceneController/<NormalChat>d__12::narration
	String_t* ___narration_4;
	// System.Int32 ChatSceneController/<NormalChat>d__12::<a>5__2
	int32_t ___U3CaU3E5__2_5;
};

// ExampleFSM/<Fall>d__11
struct U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2  : public RuntimeObject
{
	// System.Int32 ExampleFSM/<Fall>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExampleFSM/<Fall>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExampleFSM ExampleFSM/<Fall>d__11::<>4__this
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* ___U3CU3E4__this_2;
};

// ExampleFSM/<Idle>d__13
struct U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA  : public RuntimeObject
{
	// System.Int32 ExampleFSM/<Idle>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExampleFSM/<Idle>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExampleFSM ExampleFSM/<Idle>d__13::<>4__this
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* ___U3CU3E4__this_2;
};

// ExampleFSM/<Jump>d__10
struct U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139  : public RuntimeObject
{
	// System.Int32 ExampleFSM/<Jump>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExampleFSM/<Jump>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExampleFSM ExampleFSM/<Jump>d__10::<>4__this
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* ___U3CU3E4__this_2;
};

// ExampleFSM/<Land>d__12
struct U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2  : public RuntimeObject
{
	// System.Int32 ExampleFSM/<Land>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExampleFSM/<Land>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExampleFSM ExampleFSM/<Land>d__12::<>4__this
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* ___U3CU3E4__this_2;
};

// ExampleFSM/<Walk>d__9
struct U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A  : public RuntimeObject
{
	// System.Int32 ExampleFSM/<Walk>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExampleFSM/<Walk>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExampleFSM ExampleFSM/<Walk>d__9::<>4__this
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* ___U3CU3E4__this_2;
	// System.Single ExampleFSM/<Walk>d__9::<flipMove>5__2
	float ___U3CflipMoveU3E5__2_3;
};

// FalconNPC/<MoveVertical>d__9
struct U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A  : public RuntimeObject
{
	// System.Int32 FalconNPC/<MoveVertical>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FalconNPC/<MoveVertical>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FalconNPC FalconNPC/<MoveVertical>d__9::<>4__this
	FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* ___U3CU3E4__this_2;
	// System.Single FalconNPC/<MoveVertical>d__9::<direction>5__2
	float ___U3CdirectionU3E5__2_3;
};

// MoveState/<Dash>d__28
struct U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E  : public RuntimeObject
{
	// System.Int32 MoveState/<Dash>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoveState/<Dash>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MoveState MoveState/<Dash>d__28::<>4__this
	MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* ___U3CU3E4__this_2;
};

// MoveState/<Jump>d__29
struct U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471  : public RuntimeObject
{
	// System.Int32 MoveState/<Jump>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoveState/<Jump>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MoveState MoveState/<Jump>d__29::<>4__this
	MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* ___U3CU3E4__this_2;
};

// MoveState/<Walk>d__27
struct U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26  : public RuntimeObject
{
	// System.Int32 MoveState/<Walk>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoveState/<Walk>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MoveState MoveState/<Walk>d__27::<>4__this
	MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* ___U3CU3E4__this_2;
};

// Timer/<timer>d__3
struct U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69  : public RuntimeObject
{
	// System.Int32 Timer/<timer>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Timer/<timer>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Timer Timer/<timer>d__3::<>4__this
	Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* ___U3CU3E4__this_2;
};

// TwinkleEffect/<Fade>d__4
struct U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD  : public RuntimeObject
{
	// System.Int32 TwinkleEffect/<Fade>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TwinkleEffect/<Fade>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TwinkleEffect TwinkleEffect/<Fade>d__4::<>4__this
	TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* ___U3CU3E4__this_2;
	// System.Single TwinkleEffect/<Fade>d__4::start
	float ___start_3;
	// System.Single TwinkleEffect/<Fade>d__4::end
	float ___end_4;
	// System.Single TwinkleEffect/<Fade>d__4::<current>5__2
	float ___U3CcurrentU3E5__2_5;
	// System.Single TwinkleEffect/<Fade>d__4::<percent>5__3
	float ___U3CpercentU3E5__3_6;
};

// TwinkleEffect/<Twinkle>d__3
struct U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD  : public RuntimeObject
{
	// System.Int32 TwinkleEffect/<Twinkle>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TwinkleEffect/<Twinkle>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TwinkleEffect TwinkleEffect/<Twinkle>d__3::<>4__this
	TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// MoveState
struct MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F  : public RuntimeObject
{
	// Player MoveState::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_0;
	// UnityEngine.GameObject MoveState::playerGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerGO_1;
	// UnityEngine.Animator MoveState::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_2;
	// UnityEngine.SpriteRenderer MoveState::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_3;
	// UnityEngine.Rigidbody2D MoveState::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_4;
	// UnityEngine.RaycastHit2D[] MoveState::rayHits
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___rayHits_5;
	// UnityEngine.Collider2D MoveState::playerCol
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___playerCol_6;
	// System.Boolean MoveState::isWalk
	bool ___isWalk_7;
	// System.Boolean MoveState::isJump
	bool ___isJump_8;
	// System.Boolean MoveState::isFall
	bool ___isFall_9;
	// System.Boolean MoveState::isGround
	bool ___isGround_10;
	// System.Boolean MoveState::isDash
	bool ___isDash_11;
	// UnityEngine.Coroutine MoveState::coWalk
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coWalk_12;
	// UnityEngine.Coroutine MoveState::coJump
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coJump_13;
	// UnityEngine.Coroutine MoveState::coDash
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coDash_14;
	// System.Single MoveState::jumpTimeLimit
	float ___jumpTimeLimit_15;
	// System.Single MoveState::jumpTimer
	float ___jumpTimer_16;
	// System.Int32 MoveState::jumpCount
	int32_t ___jumpCount_17;
	// System.Single MoveState::dashTimeLimit
	float ___dashTimeLimit_18;
	// System.Single MoveState::dashTimer
	float ___dashTimer_19;
	// System.Single MoveState::axisX
	float ___axisX_20;
	// UnityEngine.Vector3 MoveState::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_21;
	// System.Single MoveState::dashY
	float ___dashY_22;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Effector2D
struct Effector2D_tAB8C9CB444A0D52AE4009243379B170A1755049F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Bullet::speed
	float ___speed_4;
	// System.Single Bullet::lifeTime
	float ___lifeTime_5;
	// UnityEngine.Vector3 Bullet::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_6;
};

// CameraMove
struct CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraMove::playerPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerPos_4;
	// UnityEngine.Vector3 CameraMove::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
	// System.Single CameraMove::cameraSpeed
	float ___cameraSpeed_6;
	// System.Single CameraMove::mapX_Min
	float ___mapX_Min_7;
	// System.Single CameraMove::mapX_Max
	float ___mapX_Max_8;
	// System.Single CameraMove::mapY_Min
	float ___mapY_Min_9;
	// System.Single CameraMove::mapY_Max
	float ___mapY_Max_10;
	// System.Single CameraMove::Width
	float ___Width_11;
	// System.Single CameraMove::Height
	float ___Height_12;
};

// ChatSceneController
struct ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SceneFade ChatSceneController::fade
	SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* ___fade_4;
	// TMPro.TextMeshProUGUI ChatSceneController::ChatText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ChatText_5;
	// TMPro.TextMeshProUGUI ChatSceneController::CharacterName
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___CharacterName_6;
	// UnityEngine.GameObject ChatSceneController::leftPos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftPos_7;
	// UnityEngine.GameObject ChatSceneController::rightPos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightPos_8;
	// UnityEngine.GameObject ChatSceneController::centerPos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___centerPos_9;
	// UnityEngine.GameObject ChatSceneController::Canverse
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Canverse_10;
	// System.String ChatSceneController::writerText
	String_t* ___writerText_11;
	// System.Boolean ChatSceneController::isChat
	bool ___isChat_12;
};

// ConsoleObject
struct ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ConsoleObject::isPlayer
	bool ___isPlayer_4;
	// UnityEngine.GameObject ConsoleObject::panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel_5;
};

// DestroyTimer
struct DestroyTimer_tD067E7BA269D0168568CE0FAFC69841E4743DAA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyTimer::TimeLimit
	float ___TimeLimit_4;
	// System.Single DestroyTimer::timer
	float ___timer_5;
};

// Effects
struct Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Effects::LeftPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LeftPos_4;
	// UnityEngine.Transform Effects::RightPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RightPos_5;
	// UnityEngine.SpriteRenderer Effects::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_6;
	// UnityEngine.Vector3 Effects::dirX
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dirX_7;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ExampleFSM
struct ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerState ExampleFSM::playerState
	int32_t ___playerState_4;
	// UnityEngine.Animator ExampleFSM::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// UnityEngine.Rigidbody2D ExampleFSM::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_6;
	// System.Single ExampleFSM::walkSpeed
	float ___walkSpeed_7;
	// System.Single ExampleFSM::jumpPower
	float ___jumpPower_8;
};

// FalconNPC
struct FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FalconNPC::LeftUpPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LeftUpPos_4;
	// UnityEngine.Transform FalconNPC::RightUpPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RightUpPos_5;
	// System.Single FalconNPC::offsetVertical
	float ___offsetVertical_6;
	// System.Single FalconNPC::SpeedY
	float ___SpeedY_7;
	// UnityEngine.SpriteRenderer FalconNPC::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_8;
	// UnityEngine.Vector3 FalconNPC::dirX
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dirX_9;
};

// Gun
struct Gun_t5F4B94D558A9EF4F3074DC102D99870D0AC897BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Gun::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_4;
	// UnityEngine.Transform Gun::muzzle_Left
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___muzzle_Left_5;
	// UnityEngine.Transform Gun::muzzle_Right
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___muzzle_Right_6;
	// System.Single Gun::shotTime
	float ___shotTime_7;
	// UnityEngine.Transform Gun::GunPos_Left
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GunPos_Left_8;
	// UnityEngine.Transform Gun::GunPos_Right
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GunPos_Right_9;
	// Player Gun::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_10;
};

// Human
struct Human_t30387D2A1A4AC2745EF3DB3EE13FE7614DA9B171  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Human::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.Single Human::walkSpeed
	float ___walkSpeed_5;
	// Player Human::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_6;
	// FalconNPC Human::falconNPC
	FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* ___falconNPC_7;
};

// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Platform::isPlayer
	bool ___isPlayer_4;
	// UnityEngine.PlatformEffector2D Platform::platFormGO
	PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* ___platFormGO_5;
};

// UnityEngine.PlatformEffector2D
struct PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3  : public Effector2D_tAB8C9CB444A0D52AE4009243379B170A1755049F
{
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.String,IState> Player::stateMap
	Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* ___stateMap_4;
	// IState Player::currentState
	RuntimeObject* ___currentState_5;
	// System.String Player::prevState
	String_t* ___prevState_6;
	// UnityEngine.GameObject Player::Effect_JumpOnGround_Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Effect_JumpOnGround_Prefab_7;
	// UnityEngine.GameObject Player::Effect_JumpOnAir_Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Effect_JumpOnAir_Prefab_8;
	// UnityEngine.GameObject Player::EffectPos_Jump
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EffectPos_Jump_9;
	// UnityEngine.GameObject Player::Effect_Walk
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Effect_Walk_10;
	// UnityEngine.GameObject Player::ClosedWeapon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ClosedWeapon_11;
	// UnityEngine.GameObject Player::Gun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Gun_12;
	// UnityEngine.Vector3 Player::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_13;
	// System.Single Player::walkSpeed
	float ___walkSpeed_14;
	// System.Single Player::jumpPower
	float ___jumpPower_15;
};

// PlayerInfo
struct PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerInfo::maxHp
	int32_t ___maxHp_4;
	// System.Int32 PlayerInfo::currentHp
	int32_t ___currentHp_5;
};

// SceneFade
struct SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SceneFade::fade
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fade_4;
	// System.Single SceneFade::fades
	float ___fades_5;
	// System.Single SceneFade::fadesTime
	float ___fadesTime_6;
	// System.Boolean SceneFade::isChanged
	bool ___isChanged_7;
	// System.Boolean SceneFade::isEnd
	bool ___isEnd_8;
};

// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Timer::currentTime
	float ___currentTime_4;
	// System.Single Timer::maxTime
	float ___maxTime_5;
};

// TitleSceneController
struct TitleSceneController_t985A0A65C469CB2E3AF9626DE53A0C5F393D96C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SceneFade TitleSceneController::fade
	SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* ___fade_4;
};

// TwinkleEffect
struct TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TwinkleEffect::fadeTime
	float ___fadeTime_4;
	// TMPro.TextMeshProUGUI TwinkleEffect::textFade
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textFade_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;

// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ChatSceneController::ChatSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatSceneController_ChatSystem_mEE42EFAEB02DD0181882DBE23063DA67A115B912 (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ChatSceneController/<ChatSystem>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChatSystemU3Ed__11__ctor_m6EEE481B44C8A31E85BAB5289A8D9510B91C2F93 (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ChatSceneController/<NormalChat>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNormalChatU3Ed__12__ctor_mDD65A601D647CCA65AA2A4C8469FBF2BB9992262 (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SceneLoader::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_mFE87E2AA20B80CBECD7C02C3A6EF68661736A3F1 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ChatSceneController::NormalChat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546 (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, String_t* ___narrator0, String_t* ___narration1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator FalconNPC::MoveVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FalconNPC_MoveVertical_mE92443F79AD04C61118C72504D8E93B35A22E095 (FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void FalconNPC/<MoveVertical>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveVerticalU3Ed__9__ctor_m51CB47548D94C40E70DB171B31A4451D6FE25398 (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.PlatformEffector2D>()
inline PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* Component_GetComponent_TisPlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3_mA0694A48E69C1B9F20C146FAFD895C24A08F9E25 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlatformEffector2D::set_rotationalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformEffector2D_set_rotationalOffset_m620906016495D1C544165EFCB6B2EA5D6663FB20 (PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void Player::SetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ExampleFSM::ChangeState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, int32_t ___newState0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void ExampleFSM/<Walk>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__9__ctor_m3F44E98A1F8B2CA1A9034F93DFA8794057FAE94E (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ExampleFSM/<Jump>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__10__ctor_m533DE658B0E10AFDFEB531501A0C7586FCC34B38 (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ExampleFSM/<Fall>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__11__ctor_m71CDBE7FCCDB7C131A251A1C0644CCA135FBB4CB (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ExampleFSM/<Land>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLandU3Ed__12__ctor_mCEB29F7A626785B3C764FD045EE3AF6128C27F60 (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ExampleFSM/<Idle>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__13__ctor_mD785591F6C7FAEB3637C361F2255FC7441298F5D (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator MoveState::Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveState_Walk_m9A9EAF3D9344AECF70AE7BE4A3DBEDD6636D121C (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MoveState::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveState_Jump_m2602F125641D449772CFDDC15B4FAF541BE8B345 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MoveState::Dash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveState_Dash_m008956E23B4A05E14C3932CFDD75436C1E9CA6D4 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single Player::get_WalkSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_WalkSpeed_m2DF1008F29A30B73ADD6B3357FCB37F42D60B347_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void MoveState/<Walk>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__27__ctor_m9ABB1BE1207804659BDA412C51796B3014233D58 (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MoveState/<Dash>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__28__ctor_m6505C5C31DEE24E1ADC8B305858D13A1714C84E5 (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MoveState/<Jump>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__29__ctor_mD461B50370C7B62FB9D9F2EDFC3EF07FF0D18CC7 (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single Player::get_JumpPower()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_JumpPower_m1376D29F3D65E14BF1D1EBE92E873BAF90AFDF75_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,IState>::.ctor()
inline void Dictionary_2__ctor_m8BF61FB0D8A2BFF4BA1E7CAC6E0365D9E91C95B1 (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void IdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState__ctor_m11E8D006FD2FD7FF595880BEA5EA132AC667FD46 (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,IState>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3 (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void MoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState__ctor_m4EBF19317152E998066B8F1BA2E869F4CAC6D180 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) ;
// System.Void AttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState__ctor_m142A8841F387A39AF24585F9FD20F5583A6B2CCC (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,IState>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m0618949A68A2022E37C0566CDB0115C74243568E (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.IEnumerator Timer::timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_timer_mE5EB7546ECAA806A89F6B7F51B61CDD8F9AFDC31 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) ;
// System.Void Timer/<timer>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimerU3Ed__3__ctor_m371740C45ECD120F178A488F22B5A3F7BB0E4F8D (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator TwinkleEffect::Twinkle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwinkleEffect_Twinkle_m24548E986395F0726B002AEC352101048F15BDD3 (TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* __this, const RuntimeMethod* method) ;
// System.Void TwinkleEffect/<Twinkle>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTwinkleU3Ed__3__ctor_mCAF743DC468D5978DD16EC984A632C2CE7C33437 (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TwinkleEffect/<Fade>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__4__ctor_m8F9AF7ADE9E846C9E40FF615FDEFF8C25FA934FA (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TwinkleEffect::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwinkleEffect_Fade_mF968E3E2797FFC68F7D64E5487A58025659C8B0D (TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* __this, float ___start0, float ___end1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMove_Awake_m9F54425E7C027E351509A9DBB26433CE88B4129B (CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CameraMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMove_Start_m9BC4AAF6D2DC912359A2DB5C7689DB27DBF4BA51 (CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220* __this, const RuntimeMethod* method) 
{
	{
		// Width = Camera.main.aspect * Camera.main.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_2, NULL);
		__this->___Width_11 = ((float)il2cpp_codegen_multiply(L_1, L_3));
		// Height = Camera.main.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_4, NULL);
		__this->___Height_12 = L_5;
		// }
		return;
	}
}
// System.Void CameraMove::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMove_FixedUpdate_m201A066ED36EFD0EFC1021ED90AB9EED69EDD9EF (CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float moveX = Mathf.Clamp(playerPos.position.x + offset.x, mapX_Min + Width, mapX_Max - Width);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerPos_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___offset_5);
		float L_4 = L_3->___x_2;
		float L_5 = __this->___mapX_Min_7;
		float L_6 = __this->___Width_11;
		float L_7 = __this->___mapX_Max_8;
		float L_8 = __this->___Width_11;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(L_2, L_4)), ((float)il2cpp_codegen_add(L_5, L_6)), ((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		V_0 = L_9;
		// float moveY = Mathf.Clamp(playerPos.position.y + offset.y, mapY_Min + Height, mapY_Max - Height);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___playerPos_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___offset_5);
		float L_14 = L_13->___y_3;
		float L_15 = __this->___mapY_Min_9;
		float L_16 = __this->___Height_12;
		float L_17 = __this->___mapY_Max_10;
		float L_18 = __this->___Height_12;
		float L_19;
		L_19 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(L_12, L_14)), ((float)il2cpp_codegen_add(L_15, L_16)), ((float)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		V_1 = L_19;
		// Vector3 movePosition = new Vector3(moveX, moveY, -15);
		float L_20 = V_0;
		float L_21 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_20, L_21, (-15.0f), NULL);
		// transform.position = Vector3.Lerp(transform.position, movePosition, Time.deltaTime * cameraSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_27 = __this->___cameraSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_24, L_25, ((float)il2cpp_codegen_multiply(L_26, L_27)), NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_28, NULL);
		// }
		return;
	}
}
// System.Void CameraMove::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMove_OnDrawGizmos_m1ADC9B649EB7816DEF3A8BE41EB36E48A718C0A0 (CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_0, NULL);
		// }
		return;
	}
}
// System.Void CameraMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMove__ctor_m3BBC2F541B40FB1634F0EA0B844BA27E5DDD9908 (CameraMove_t23DC216F2FEE6FAB9028C55F387423FE67634220* __this, const RuntimeMethod* method) 
{
	{
		// public float cameraSpeed = 3f;
		__this->___cameraSpeed_6 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChatSceneController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatSceneController_Awake_mB0B56AE865E3CFC52EEA35B2A15E4C50C00167EB (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, const RuntimeMethod* method) 
{
	{
		// Application.runInBackground = true;
		Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
		// leftPos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftPos_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// rightPos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___rightPos_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// centerPos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___centerPos_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ChatSceneController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatSceneController_Start_mB010B59B9BBB8D9B4A07355FCEB2E02DB9BDA7DC (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChatSystem());
		RuntimeObject* L_0;
		L_0 = ChatSceneController_ChatSystem_mEE42EFAEB02DD0181882DBE23063DA67A115B912(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ChatSceneController::ChatSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatSceneController_ChatSystem_mEE42EFAEB02DD0181882DBE23063DA67A115B912 (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* L_0 = (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A*)il2cpp_codegen_object_new(U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChatSystemU3Ed__11__ctor_m6EEE481B44C8A31E85BAB5289A8D9510B91C2F93(L_0, 0, NULL);
		U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ChatSceneController::NormalChat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546 (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, String_t* ___narrator0, String_t* ___narration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* L_0 = (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF*)il2cpp_codegen_object_new(U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNormalChatU3Ed__12__ctor_mDD65A601D647CCA65AA2A4C8469FBF2BB9992262(L_0, 0, NULL);
		U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* L_2 = L_1;
		String_t* L_3 = ___narrator0;
		NullCheck(L_2);
		L_2->___narrator_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___narrator_3), (void*)L_3);
		U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* L_4 = L_2;
		String_t* L_5 = ___narration1;
		NullCheck(L_4);
		L_4->___narration_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___narration_4), (void*)L_5);
		return L_4;
	}
}
// System.Void ChatSceneController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatSceneController_Update_m0CFD85D1184558890FD7AA4BCC33A3405659E8FB (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isChat)
		bool L_0 = __this->___isChat_12;
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// fade.isChanged = true;
		SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* L_1 = __this->___fade_4;
		NullCheck(L_1);
		L_1->___isChanged_7 = (bool)1;
		// leftPos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___leftPos_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// rightPos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___rightPos_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// centerPos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___centerPos_9;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// if (fade.isEnd)
		SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* L_5 = __this->___fade_4;
		NullCheck(L_5);
		bool L_6 = L_5->___isEnd_8;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// SceneLoader.LoadScene("GameScene");
		SceneLoader_LoadScene_mFE87E2AA20B80CBECD7C02C3A6EF68661736A3F1(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void ChatSceneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatSceneController__ctor_m77F619367DAE1B3C3786722B16335097FA2D9AC7 (ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string writerText = "";
		__this->___writerText_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writerText_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChatSceneController/<ChatSystem>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChatSystemU3Ed__11__ctor_m6EEE481B44C8A31E85BAB5289A8D9510B91C2F93 (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ChatSceneController/<ChatSystem>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChatSystemU3Ed__11_System_IDisposable_Dispose_mD917E875980503F90DD7B392EF71CFC0BF28FD58 (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ChatSceneController/<ChatSystem>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChatSystemU3Ed__11_MoveNext_m377484DAA00281924788ED94BF934BB7E960050D (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3512AE59830B704F34901B2998D5A244F77D4EDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4205E1BB14D776D93542524AA9865792CFDF9031);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54364BB4B2924C75891E88C93F3FD709FEAEA07E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral640C321D21DB0FC277C16205356FBF50C3EFF5EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ADD85BD02EB360253CC358034C3A4C46DBBC235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877307CCC575E20414F10F383C792C3122CE3F18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88ABBB2DD2D448C7C75A6ABCBFE514575AFA71D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E660482C7C908E77A91D3F8E54330DC27D7D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB923DC9F73366D5C321730EC36587E83AD46798C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB7AC607606B85C1EA7156B8ACA9EF6A0C68E59C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF476F51FEA9DC82535522D85B6E9D68C49D9A94C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBE0C20FE941A79E77D67CF752C87CD993CDA39C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00a6;
			}
			case 3:
			{
				goto IL_00d2;
			}
			case 4:
			{
				goto IL_00fe;
			}
			case 5:
			{
				goto IL_012a;
			}
			case 6:
			{
				goto IL_0156;
			}
			case 7:
			{
				goto IL_0182;
			}
			case 8:
			{
				goto IL_01ae;
			}
			case 9:
			{
				goto IL_01db;
			}
			case 10:
			{
				goto IL_0208;
			}
			case 11:
			{
				goto IL_0235;
			}
			case 12:
			{
				goto IL_0262;
			}
			case 13:
			{
				goto IL_028f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "????? ???"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_3 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_4, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteral54364BB4B2924C75891E88C93F3FD709FEAEA07E, NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "??? ???????? 911"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_7 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_8, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteralCB7AC607606B85C1EA7156B8ACA9EF6A0C68E59C, NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "???? ????????? ???? ??? ??????"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_11 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_12, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteral4205E1BB14D776D93542524AA9865792CFDF9031, NULL);
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00d2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "?????, ????? ??????? ???, ??? ???????"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_15 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_16, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteralB923DC9F73366D5C321730EC36587E83AD46798C, NULL);
		NullCheck(L_15);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18;
		L_18 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_15, L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_00fe:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("????", "??, ???????. ???????"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_19 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_20, _stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F, _stringLiteral640C321D21DB0FC277C16205356FBF50C3EFF5EE, NULL);
		NullCheck(L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_012a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("????", "????? ?????????? ?????????"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_23 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_24 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_24, _stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F, _stringLiteralFBE0C20FE941A79E77D67CF752C87CD993CDA39C, NULL);
		NullCheck(L_23);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_23, L_25, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_0156:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "????? ???????? ????????????."));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_27 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_28 = V_1;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_28, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteral3512AE59830B704F34901B2998D5A244F77D4EDC, NULL);
		NullCheck(L_27);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_27, L_29, NULL);
		__this->___U3CU3E2__current_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_0182:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "???? ?????? ??????? ?????? ?????????..."));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_31 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_32 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_32, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteralB3E660482C7C908E77A91D3F8E54330DC27D7D9F, NULL);
		NullCheck(L_31);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_34;
		L_34 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_31, L_33, NULL);
		__this->___U3CU3E2__current_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_01ae:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "?? ??? ?????? ????????????"));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_35 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_36 = V_1;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_36, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteral7ADD85BD02EB360253CC358034C3A4C46DBBC235, NULL);
		NullCheck(L_35);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_35, L_37, NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = ((int32_t)9);
		return (bool)1;
	}

IL_01db:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("????", "??, ???????."));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_39 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_40 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_40, _stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F, _stringLiteral88ABBB2DD2D448C7C75A6ABCBFE514575AFA71D1, NULL);
		NullCheck(L_39);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_42;
		L_42 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_39, L_41, NULL);
		__this->___U3CU3E2__current_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_42);
		__this->___U3CU3E1__state_0 = ((int32_t)10);
		return (bool)1;
	}

IL_0208:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("????", ""));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_43 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_44 = V_1;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_44, _stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_43);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_46;
		L_46 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_43, L_45, NULL);
		__this->___U3CU3E2__current_1 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_46);
		__this->___U3CU3E1__state_0 = ((int32_t)11);
		return (bool)1;
	}

IL_0235:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("?????", "..."));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_47 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_48 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_48, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		NullCheck(L_47);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_50;
		L_50 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_47, L_49, NULL);
		__this->___U3CU3E2__current_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_50);
		__this->___U3CU3E1__state_0 = ((int32_t)12);
		return (bool)1;
	}

IL_0262:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(NormalChat("", "???????? ???????..."));
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_51 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_52 = V_1;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = ChatSceneController_NormalChat_m1F6BC22268E869FCB522D990C05D111176CF9546(L_52, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralF476F51FEA9DC82535522D85B6E9D68C49D9A94C, NULL);
		NullCheck(L_51);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_54;
		L_54 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_51, L_53, NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = ((int32_t)13);
		return (bool)1;
	}

IL_028f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isChat = true;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_55 = V_1;
		NullCheck(L_55);
		L_55->___isChat_12 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object ChatSceneController/<ChatSystem>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChatSystemU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4FF96F8501C0C4F193DA10FC8B26D7F875C81226 (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ChatSceneController/<ChatSystem>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChatSystemU3Ed__11_System_Collections_IEnumerator_Reset_mB71BC946D8E287501C5FB97426D52EC3F5C0B508 (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChatSystemU3Ed__11_System_Collections_IEnumerator_Reset_mB71BC946D8E287501C5FB97426D52EC3F5C0B508_RuntimeMethod_var)));
	}
}
// System.Object ChatSceneController/<ChatSystem>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChatSystemU3Ed__11_System_Collections_IEnumerator_get_Current_m4178B93C545986EC53179D3D45A110F92ACA00D7 (U3CChatSystemU3Ed__11_t7668ECC86E59E666788FE6949E6B454F46D1E32A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChatSceneController/<NormalChat>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNormalChatU3Ed__12__ctor_mDD65A601D647CCA65AA2A4C8469FBF2BB9992262 (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ChatSceneController/<NormalChat>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNormalChatU3Ed__12_System_IDisposable_Dispose_m5BD1CF23CF8D740508151B189516C5C80CA77D72 (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ChatSceneController/<NormalChat>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNormalChatU3Ed__12_MoveNext_m45B6338F1D9E29C20C11FC0FC675EB29ECBAE2FC (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877307CCC575E20414F10F383C792C3122CE3F18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0134;
			}
			case 2:
			{
				goto IL_017f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int a = 0;
		__this->___U3CaU3E5__2_5 = 0;
		// CharacterName.text = narrator;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_3 = V_1;
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3->___CharacterName_6;
		String_t* L_5 = __this->___narrator_3;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		// writerText = "";
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_6 = V_1;
		NullCheck(L_6);
		L_6->___writerText_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___writerText_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if(narrator == "????")
		String_t* L_7 = __this->___narrator_3;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral5F9CCCFAB56CBE9E7A153DB36AA1627CC314AC9F, NULL);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		// leftPos.SetActive(true);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___leftPos_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// rightPos.SetActive(false);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___rightPos_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// centerPos.SetActive(false);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___centerPos_9;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		goto IL_00e0;
	}

IL_0084:
	{
		// else if(narrator == "?????")
		String_t* L_15 = __this->___narrator_3;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral877307CCC575E20414F10F383C792C3122CE3F18, NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		// leftPos.SetActive(false);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___leftPos_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// rightPos.SetActive(true);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___rightPos_8;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// centerPos.SetActive(false);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___centerPos_9;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		goto IL_00e0;
	}

IL_00bc:
	{
		// leftPos.SetActive(false);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_23 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___leftPos_7;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// rightPos.SetActive(false);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___rightPos_8;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// centerPos.SetActive(true);
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_27 = V_1;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___centerPos_9;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
	}

IL_00e0:
	{
		// for (a = 0; a < narration.Length; a++)
		__this->___U3CaU3E5__2_5 = 0;
		goto IL_014b;
	}

IL_00e9:
	{
		// writerText += narration[a];
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_29 = V_1;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31 = L_30->___writerText_11;
		String_t* L_32 = __this->___narration_4;
		int32_t L_33 = __this->___U3CaU3E5__2_5;
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_33, NULL);
		V_2 = L_34;
		String_t* L_35;
		L_35 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_36;
		L_36 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_31, L_35, NULL);
		NullCheck(L_29);
		L_29->___writerText_11 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___writerText_11), (void*)L_36);
		// ChatText.text = writerText;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_37 = V_1;
		NullCheck(L_37);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38 = L_37->___ChatText_5;
		ChatSceneController_t8E2B353B677D3755A28F94EC3639EC2A22F5C9D0* L_39 = V_1;
		NullCheck(L_39);
		String_t* L_40 = L_39->___writerText_11;
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_38, L_40);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0134:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (a = 0; a < narration.Length; a++)
		int32_t L_41 = __this->___U3CaU3E5__2_5;
		V_3 = L_41;
		int32_t L_42 = V_3;
		__this->___U3CaU3E5__2_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_014b:
	{
		// for (a = 0; a < narration.Length; a++)
		int32_t L_43 = __this->___U3CaU3E5__2_5;
		String_t* L_44 = __this->___narration_4;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_44, NULL);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_00e9;
		}
	}

IL_015e:
	{
		// if(Input.GetKeyDown(KeyCode.Return) || Input.touchCount > 0)
		bool L_46;
		L_46 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)13), NULL);
		if (L_46)
		{
			goto IL_0188;
		}
	}
	{
		int32_t L_47;
		L_47 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_0188;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_017f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_015e;
	}

IL_0188:
	{
		// }
		return (bool)0;
	}
}
// System.Object ChatSceneController/<NormalChat>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNormalChatU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m67B53FF0A4C1889D877CA6B58B780F72C2059174 (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ChatSceneController/<NormalChat>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNormalChatU3Ed__12_System_Collections_IEnumerator_Reset_mFBC98551CCA30E964C5E9EB9956E4932A7BDFA20 (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNormalChatU3Ed__12_System_Collections_IEnumerator_Reset_mFBC98551CCA30E964C5E9EB9956E4932A7BDFA20_RuntimeMethod_var)));
	}
}
// System.Object ChatSceneController/<NormalChat>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNormalChatU3Ed__12_System_Collections_IEnumerator_get_Current_mA98BE13321175FF80EB640B06EC387A3464614B4 (U3CNormalChatU3Ed__12_t8DBDED509C06519ED90FD13D8661621D9BC453CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ConsoleObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleObject_Awake_m714127E661D34CECC26355DF9B3CC2BAEA1E82BD (ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62* __this, const RuntimeMethod* method) 
{
	{
		// panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ConsoleObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleObject_Update_m8A5B6D94ED41B59B60F5F4B7949B65B233DF3777 (ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62* __this, const RuntimeMethod* method) 
{
	{
		// if(isPlayer)
		bool L_0 = __this->___isPlayer_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// panel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___panel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0015:
	{
		// panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panel_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ConsoleObject::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleObject_OnTriggerEnter2D_mE14B55D2A786341C40009C38FA0E26BE366D57D7 (ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPlayer = collision.gameObject.CompareTag("Player");
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___isPlayer_4 = L_2;
		// }
		return;
	}
}
// System.Void ConsoleObject::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleObject_OnTriggerExit2D_mF60AACDA24DF0A1C9A3852AD534CE7ED726A70B6 (ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// isPlayer = false;
		__this->___isPlayer_4 = (bool)0;
		// }
		return;
	}
}
// System.Void ConsoleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleObject__ctor_mDD180363E5B7784D6C7ED7F801A355BB69E9656B (ConsoleObject_t6C98E4889CF010AB1703D1A4A8080384E5E13F62* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DestroyTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyTimer_Update_m4DCAA8233D409101DF333CA6D956B8E7DC952878 (DestroyTimer_tD067E7BA269D0168568CE0FAFC69841E4743DAA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(timer > TimeLimit)
		float L_2 = __this->___timer_5;
		float L_3 = __this->___TimeLimit_4;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void DestroyTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyTimer__ctor_m01B16CA9D965F10CE5341B883BAD0701C3B97AFE (DestroyTimer_tD067E7BA269D0168568CE0FAFC69841E4743DAA8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FalconNPC::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconNPC_Awake_m5E7C449BD4768F53033B2814DB5F051FF9E72F0F (FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void FalconNPC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconNPC_Start_m8BBD9EFDA81CDCD18F2DC04382C2EB52785E073B (FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = LeftUpPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___LeftUpPos_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// dirX = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___dirX_9 = L_3;
		// StartCoroutine(MoveVertical());
		RuntimeObject* L_4;
		L_4 = FalconNPC_MoveVertical_mE92443F79AD04C61118C72504D8E93B35A22E095(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void FalconNPC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconNPC_Update_m1332BD9197DF14EA0FC6331CA92DCF62DDCF3130 (FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var hInput = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// if (hInput < 0)
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// dirX = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		__this->___dirX_9 = L_2;
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_8;
		NullCheck(L_3);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_3, (bool)1, NULL);
		goto IL_004b;
	}

IL_002c:
	{
		// else if (hInput > 0)
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// dirX = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___dirX_9 = L_5;
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_8;
		NullCheck(L_6);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_6, (bool)0, NULL);
	}

IL_004b:
	{
		// if (dirX == Vector3.right && (transform.position.x != LeftUpPos.position.x))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dirX_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		bool L_9;
		L_9 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_00cc;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___LeftUpPos_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		if ((((float)L_12) == ((float)L_15)))
		{
			goto IL_00cc;
		}
	}
	{
		// var targetPosition = new Vector3(LeftUpPos.position.x, transform.position.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___LeftUpPos_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_18, L_21, (0.0f), NULL);
		// transform.position = Vector3.Lerp(transform.position, targetPosition, 0.075f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_24, L_25, (0.075000003f), NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_26, NULL);
	}

IL_00cc:
	{
		// if (dirX == Vector3.left && (transform.position.x != RightUpPos.position.x))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___dirX_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		bool L_29;
		L_29 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_014d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___RightUpPos_5;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___x_2;
		if ((((float)L_32) == ((float)L_35)))
		{
			goto IL_014d;
		}
	}
	{
		// var targetPosition = new Vector3(RightUpPos.position.x, transform.position.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___RightUpPos_5;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_38, L_41, (0.0f), NULL);
		// transform.position = Vector3.Lerp(transform.position, targetPosition, 0.075f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_44, L_45, (0.075000003f), NULL);
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_46, NULL);
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FalconNPC::MoveVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FalconNPC_MoveVertical_mE92443F79AD04C61118C72504D8E93B35A22E095 (FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* L_0 = (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A*)il2cpp_codegen_object_new(U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveVerticalU3Ed__9__ctor_m51CB47548D94C40E70DB171B31A4451D6FE25398(L_0, 0, NULL);
		U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FalconNPC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconNPC__ctor_mA9AE97F9DE540ED8A9C686DC35A8E24AC68EF8A0 (FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FalconNPC/<MoveVertical>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveVerticalU3Ed__9__ctor_m51CB47548D94C40E70DB171B31A4451D6FE25398 (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FalconNPC/<MoveVertical>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveVerticalU3Ed__9_System_IDisposable_Dispose_mED88215AE4745D9DD78ADBA9CE3A2139CABAE3B7 (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FalconNPC/<MoveVertical>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveVerticalU3Ed__9_MoveNext_mEA0B9E706AC0A9A8F0E7B32354E89770DE8277A6 (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var direction = 1f;
		__this->___U3CdirectionU3E5__2_3 = (1.0f);
	}

IL_002c:
	{
		// if (transform.position.y < LeftUpPos.position.y - offsetVertical)
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___LeftUpPos_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___offsetVertical_6;
		if ((!(((float)L_7) < ((float)((float)il2cpp_codegen_subtract(L_11, L_13))))))
		{
			goto IL_0062;
		}
	}
	{
		// direction = 1f;
		__this->___U3CdirectionU3E5__2_3 = (1.0f);
		goto IL_008f;
	}

IL_0062:
	{
		// else if (transform.position.y > LeftUpPos.position.y)
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___LeftUpPos_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		if ((!(((float)L_17) > ((float)L_21))))
		{
			goto IL_008f;
		}
	}
	{
		// direction = -1f;
		__this->___U3CdirectionU3E5__2_3 = (-1.0f);
	}

IL_008f:
	{
		// transform.Translate(Vector3.up * Time.deltaTime * direction * SpeedY);
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_25;
		L_25 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_24, L_25, NULL);
		float L_27 = __this->___U3CdirectionU3E5__2_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, L_27, NULL);
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->___SpeedY_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_30, NULL);
		NullCheck(L_23);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_23, L_31, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00cf:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_002c;
	}
}
// System.Object FalconNPC/<MoveVertical>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveVerticalU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD23562E9C74775E838B5E67CBEAAE013CB7A9ECE (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FalconNPC/<MoveVertical>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveVerticalU3Ed__9_System_Collections_IEnumerator_Reset_m4FACCD1047E6CB4E88DB29E693CD405F5768399C (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveVerticalU3Ed__9_System_Collections_IEnumerator_Reset_m4FACCD1047E6CB4E88DB29E693CD405F5768399C_RuntimeMethod_var)));
	}
}
// System.Object FalconNPC/<MoveVertical>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveVerticalU3Ed__9_System_Collections_IEnumerator_get_Current_mDA97062812A54D00B11F24897A5DCAFB302FBF0E (U3CMoveVerticalU3Ed__9_tF3D1458F211D3DF5EE10C800771A0B9EB0B4083A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gun::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Awake_mCD7D689FD68B82EB239F27BB80A09AE4196F680A (Gun_t5F4B94D558A9EF4F3074DC102D99870D0AC897BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_10;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_5);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_5, (bool)1, NULL);
		// transform.position = GunPos_Left.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___GunPos_Left_8;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		return;
	}

IL_003f:
	{
		// this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_10);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_10, (bool)0, NULL);
		// transform.position = GunPos_Right.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___GunPos_Right_9;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Gun::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Update_mEC44EAA5FF625DE51423D4BBBE9F5918BA05CCA3 (Gun_t5F4B94D558A9EF4F3074DC102D99870D0AC897BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_10;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_5);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_5, (bool)1, NULL);
		// transform.position = GunPos_Left.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___GunPos_Left_8;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		return;
	}

IL_003f:
	{
		// this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_10);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_10, (bool)0, NULL);
		// transform.position = GunPos_Right.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___GunPos_Right_9;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Gun::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Fire_mD02A23E65F376810CDE8CCCB6948933A3D35AC4F (Gun_t5F4B94D558A9EF4F3074DC102D99870D0AC897BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_10;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_2, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Instantiate(bullet, muzzle_Left.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bullet_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___muzzle_Left_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		return;
	}

IL_0034:
	{
		// Instantiate(bullet, muzzle_Right.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___bullet_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___muzzle_Right_6;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__ctor_m55BE2F29049D4DD5E4B1201A5D6B1BC7B61026E4 (Gun_t5F4B94D558A9EF4F3074DC102D99870D0AC897BE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Monster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster__ctor_m4E10FC18FF41A1D3156A7AC924B06AD7F3882E04 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Platform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Start_m1E50717E413645B079D75167F0FA7473A887472A (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3_mA0694A48E69C1B9F20C146FAFD895C24A08F9E25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPlayer = false;
		__this->___isPlayer_4 = (bool)0;
		// platFormGO = GetComponent<PlatformEffector2D>();
		PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* L_0;
		L_0 = Component_GetComponent_TisPlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3_mA0694A48E69C1B9F20C146FAFD895C24A08F9E25(__this, Component_GetComponent_TisPlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3_mA0694A48E69C1B9F20C146FAFD895C24A08F9E25_RuntimeMethod_var);
		__this->___platFormGO_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platFormGO_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Platform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Update_m1F1046B74837D34D83EA1C9AAB2F0581B033D645 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.S) && Input.GetKeyDown(KeyCode.DownArrow) && isPlayer)
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)115), NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)274), NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = __this->___isPlayer_4;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// platFormGO.rotationalOffset = 180f;
		PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* L_3 = __this->___platFormGO_5;
		NullCheck(L_3);
		PlatformEffector2D_set_rotationalOffset_m620906016495D1C544165EFCB6B2EA5D6663FB20(L_3, (180.0f), NULL);
		goto IL_005c;
	}

IL_002f:
	{
		// else if (Input.GetKeyDown(KeyCode.S) && Input.GetKey(KeyCode.DownArrow) && isPlayer)
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)115), NULL);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)274), NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		bool L_6 = __this->___isPlayer_4;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// platFormGO.rotationalOffset = 180f;
		PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* L_7 = __this->___platFormGO_5;
		NullCheck(L_7);
		PlatformEffector2D_set_rotationalOffset_m620906016495D1C544165EFCB6B2EA5D6663FB20(L_7, (180.0f), NULL);
	}

IL_005c:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_8;
		L_8 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		// platFormGO.rotationalOffset = 0f;
		PlatformEffector2D_t35F54647A4B8F8D480A34B8353F09FBF20A53AF3* L_9 = __this->___platFormGO_5;
		NullCheck(L_9);
		PlatformEffector2D_set_rotationalOffset_m620906016495D1C544165EFCB6B2EA5D6663FB20(L_9, (0.0f), NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Platform::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnCollisionEnter2D_m055BD01394A4EAB2DC0CA6B1016956AA4AA986E0 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPlayer = collision.gameObject.CompareTag("Player");
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___isPlayer_4 = L_2;
		// }
		return;
	}
}
// System.Void Platform::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnCollisionExit2D_m08B2EEC4BDD023CEB1CA27D27425DA4C247BA77F (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	{
		// isPlayer = false;
		__this->___isPlayer_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m7B49FC4AD80BC236383C1A82204EC91E11369498 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Start_m6BD187DD353835D248DA404B169DCE29CEB2B813 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_0, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		// if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_2, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_6);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_6, (bool)1, NULL);
		// direction = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		__this->___direction_6 = L_7;
		goto IL_005a;
	}

IL_003e:
	{
		// this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_9);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_9, (bool)0, NULL);
		// direction = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___direction_6 = L_10;
	}

IL_005a:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_m5AA63D0B1F389C2CFEE77466E1C39ADC813B4DBC (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(direction * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___direction_6;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5f;
		__this->___speed_4 = (5.0f);
		// public float lifeTime = 2f;
		__this->___lifeTime_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackState::OnEnter(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState_OnEnter_m4CE9EC260DB9A876B1E534DA47BC35BEDEC99A5D (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curTime = 0f;
		__this->___curTime_5 = (0.0f);
		// this.player = player;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___player0;
		__this->___player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_0), (void*)L_0);
		// playerGO = player.gameObject;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = ___player0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___playerGO_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerGO_1), (void*)L_2);
		// animator = playerGO.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playerGO_1;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_2), (void*)L_4);
		// spriteRenderer = playerGO.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___playerGO_1;
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___spriteRenderer_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_3), (void*)L_6);
		// animator.SetBool("isAttack", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_2;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73, (bool)1, NULL);
		// player.Gun.SetActive(true);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = ___player0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___Gun_12;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// player.Gun.SendMessage("Fire");
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = ___player0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___Gun_12;
		NullCheck(L_11);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_11, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, NULL);
		// }
		return;
	}
}
// System.Void AttackState::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState_OnUpdate_mBF2DC139EB1A9385AADC81760AAA1E1F33E7BEB5 (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (curTime < coolTime)
		float L_0 = __this->___curTime_5;
		float L_1 = __this->___coolTime_6;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		// curTime += Time.deltaTime;
		float L_2 = __this->___curTime_5;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___curTime_5 = ((float)il2cpp_codegen_add(L_2, L_3));
		return;
	}

IL_0021:
	{
		// animator.SetBool("isAttack", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_2;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73, (bool)0, NULL);
		// player.Gun.SetActive(false);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___Gun_12;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// player.SetState(player.prevState);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = __this->___player_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = __this->___player_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___prevState_6;
		NullCheck(L_7);
		Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void AttackState::OnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState_OnExit_m9BA6DE229F723E372F2C5F46657D4ED1E39ED8DB (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isAttack", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_2;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73, (bool)0, NULL);
		// player.prevState = "AttackState";
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_0;
		NullCheck(L_1);
		L_1->___prevState_6 = _stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___prevState_6), (void*)_stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72);
		// }
		return;
	}
}
// System.Void AttackState::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState_OnFixedUpdate_m337825FFBE6FDEE9D246CEBE02782C86C735A200 (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackState__ctor_m142A8841F387A39AF24585F9FD20F5583A6B2CCC (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* __this, const RuntimeMethod* method) 
{
	{
		// public float coolTime = 0.5f;
		__this->___coolTime_6 = (0.5f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Effects::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects_Awake_m8252C500EC30A278A2F707CE500150030636B00B (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Effects::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects_Start_m986B0D80AC313BBA9DEEE514DD995007048C16AD (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = LeftPos.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___LeftPos_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// dirX = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___dirX_7 = L_3;
		// }
		return;
	}
}
// System.Void Effects::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects_Update_m35C1A350F9193373D9DA0C76CA3E4BC3FB34846D (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var hInput = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// if (hInput < 0)
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// dirX = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		__this->___dirX_7 = L_2;
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_6;
		NullCheck(L_3);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_3, (bool)0, NULL);
		goto IL_004b;
	}

IL_002c:
	{
		// else if (hInput > 0)
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// dirX = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___dirX_7 = L_5;
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_6;
		NullCheck(L_6);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_6, (bool)1, NULL);
	}

IL_004b:
	{
		// if (dirX == Vector3.right && (transform.position.x != LeftPos.position.x))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dirX_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		bool L_9;
		L_9 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_00b7;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___LeftPos_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		if ((((float)L_12) == ((float)L_15)))
		{
			goto IL_00b7;
		}
	}
	{
		// var targetPosition = new Vector3(LeftPos.position.x, transform.position.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___LeftPos_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_18, L_21, (0.0f), NULL);
		// transform.position = targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
	}

IL_00b7:
	{
		// if (dirX == Vector3.left && (transform.position.x != RightPos.position.x))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___dirX_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		bool L_26;
		L_26 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_0123;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___RightPos_5;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___x_2;
		if ((((float)L_29) == ((float)L_32)))
		{
			goto IL_0123;
		}
	}
	{
		// var targetPosition = new Vector3(RightPos.position.x, transform.position.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___RightPos_5;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_35, L_38, (0.0f), NULL);
		// transform.position = targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		NullCheck(L_39);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_39, L_40, NULL);
	}

IL_0123:
	{
		// }
		return;
	}
}
// System.Void Effects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects__ctor_m43728EBA9803CD3F1E06B46E15F4D339D7870378 (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleFSM::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleFSM_Awake_m2D3760E0CA56C148F3CE85B9BDDFFBE98AFB20D1 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_6), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_1);
		// ChangeState(PlayerState.Idle);
		ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void ExampleFSM::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleFSM_Update_m45B7C9AC1F6B9D3CF779C5AFF0D6BFB8D7168D23 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetAxisRaw("Horizontal") != 0)
		float L_0;
		L_0 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0018;
		}
	}
	{
		// ChangeState(PlayerState.Walk);
		ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D(__this, 1, NULL);
	}

IL_0018:
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_1;
		L_1 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// ChangeState(PlayerState.Jump);
		ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D(__this, 2, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void ExampleFSM::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleFSM_FixedUpdate_m287EEF465DB76EFAAC20C12DDDA2E9C79DCB7665 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	{
		// if (rigid.velocity.y < 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		float L_2 = L_1.___y_1;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// ChangeState(PlayerState.Fall);
		ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D(__this, 3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ExampleFSM::ChangeState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(playerState.ToString());
		int32_t* L_0 = (&__this->___playerState_4);
		Il2CppFakeBox<int32_t> L_1(PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, L_2, NULL);
		// playerState = newState;
		int32_t L_3 = ___newState0;
		__this->___playerState_4 = L_3;
		// StartCoroutine(playerState.ToString());
		int32_t* L_4 = (&__this->___playerState_4);
		Il2CppFakeBox<int32_t> L_5(PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ExampleFSM::Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleFSM_Walk_mD33920BE6BDAEC9FCC5D32CB7B2272CD7AC23A03 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* L_0 = (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A*)il2cpp_codegen_object_new(U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWalkU3Ed__9__ctor_m3F44E98A1F8B2CA1A9034F93DFA8794057FAE94E(L_0, 0, NULL);
		U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ExampleFSM::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleFSM_Jump_m1FA90548C1A3600668F7BE5058A68EE64EB1531B (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* L_0 = (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139*)il2cpp_codegen_object_new(U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpU3Ed__10__ctor_m533DE658B0E10AFDFEB531501A0C7586FCC34B38(L_0, 0, NULL);
		U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ExampleFSM::Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleFSM_Fall_m8AE44F2AB55CFA7F0B8AC2FF7C25D0DF359267A9 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* L_0 = (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2*)il2cpp_codegen_object_new(U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFallU3Ed__11__ctor_m71CDBE7FCCDB7C131A251A1C0644CCA135FBB4CB(L_0, 0, NULL);
		U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ExampleFSM::Land()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleFSM_Land_mA48A4DF6BFA855A59F24C97D3314185EA3141DF2 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* L_0 = (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2*)il2cpp_codegen_object_new(U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLandU3Ed__12__ctor_mCEB29F7A626785B3C764FD045EE3AF6128C27F60(L_0, 0, NULL);
		U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ExampleFSM::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleFSM_Idle_m23DE1CDDCAD52BA1B591C4A75D7C5247D6A2B0AE (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* L_0 = (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA*)il2cpp_codegen_object_new(U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIdleU3Ed__13__ctor_mD785591F6C7FAEB3637C361F2255FC7441298F5D(L_0, 0, NULL);
		U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ExampleFSM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleFSM__ctor_mF3C5A0E9857396AC30E434BB206AEBBBC98BA932 (ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* __this, const RuntimeMethod* method) 
{
	{
		// float walkSpeed = 3f;
		__this->___walkSpeed_7 = (3.0f);
		// float jumpPower = 3f;
		__this->___jumpPower_8 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleFSM/<Walk>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__9__ctor_m3F44E98A1F8B2CA1A9034F93DFA8794057FAE94E (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExampleFSM/<Walk>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__9_System_IDisposable_Dispose_mEB1FB7AE1D3D8465FE77D438366D36A500EBBC24 (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExampleFSM/<Walk>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWalkU3Ed__9_MoveNext_mD2272F0629EC730BE239CAB81360175A1FF4C406 (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ed;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float flipMove = 0f;
		__this->___U3CflipMoveU3E5__2_3 = (0.0f);
		// animator.SetBool("isWalk", true);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___animator_5;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)1, NULL);
	}

IL_003d:
	{
		// if (Input.GetAxisRaw("Horizontal") < 0)
		float L_6;
		L_6 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// flipMove = -1;
		__this->___U3CflipMoveU3E5__2_3 = (-1.0f);
		// transform.localScale = new Vector3(-1f, 1f, 1f);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		goto IL_00b5;
	}

IL_007a:
	{
		// else if (Input.GetAxisRaw("Horizontal") > 0)
		float L_10;
		L_10 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// flipMove = 1;
		__this->___U3CflipMoveU3E5__2_3 = (1.0f);
		// transform.localScale = new Vector3(1f, 1f, 1f);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
	}

IL_00b5:
	{
		// transform.Translate(flipMove * walkSpeed * Time.deltaTime, 0f, 0f);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		float L_16 = __this->___U3CflipMoveU3E5__2_3;
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___walkSpeed_7;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_15);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_18)), L_19)), (0.0f), (0.0f), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ChangeState(PlayerState.Idle);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_20 = V_1;
		NullCheck(L_20);
		ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D(L_20, 0, NULL);
		// while (true)
		goto IL_003d;
	}
}
// System.Object ExampleFSM/<Walk>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m46F7A6E75B060BD0279E3B4FF552F13BEC1532ED (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExampleFSM/<Walk>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__9_System_Collections_IEnumerator_Reset_mBFE29F195C7B414FC60A776B3F8F7F34A4FDC91E (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWalkU3Ed__9_System_Collections_IEnumerator_Reset_mBFE29F195C7B414FC60A776B3F8F7F34A4FDC91E_RuntimeMethod_var)));
	}
}
// System.Object ExampleFSM/<Walk>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkU3Ed__9_System_Collections_IEnumerator_get_Current_mFD5ADA479BA3622BA30615388FA50A6AC7F9089E (U3CWalkU3Ed__9_t504B2874356821BAFE77AC9E6170AF31C1E60E9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleFSM/<Jump>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__10__ctor_m533DE658B0E10AFDFEB531501A0C7586FCC34B38 (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExampleFSM/<Jump>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__10_System_IDisposable_Dispose_mC648203328F095D4DD3374F9A4535AA9B80469F9 (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExampleFSM/<Jump>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpU3Ed__10_MoveNext_mA0CCD9AF46EAACF6C402A98C4E6E91E604737B66 (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animator.SetTrigger("isJump");
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___animator_5;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, NULL);
		// rigid.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_6 = V_1;
		NullCheck(L_6);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = L_6->___rigid_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___jumpPower_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_8, L_10, NULL);
		NullCheck(L_7);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_7, L_11, 1, NULL);
	}

IL_004a:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_004a;
	}
}
// System.Object ExampleFSM/<Jump>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m93F599444D9F3371B30C051ED7D37A184DB0C638 (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExampleFSM/<Jump>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__10_System_Collections_IEnumerator_Reset_m04F5E9DA3E3521F349F7E4088E236F46BB39F8DC (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpU3Ed__10_System_Collections_IEnumerator_Reset_m04F5E9DA3E3521F349F7E4088E236F46BB39F8DC_RuntimeMethod_var)));
	}
}
// System.Object ExampleFSM/<Jump>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__10_System_Collections_IEnumerator_get_Current_m4AB517F72806868A05850DC42A09E28F81AEE58B (U3CJumpU3Ed__10_tE5721FE316B6844AE92E673C055EAAEBA5016139* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleFSM/<Fall>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__11__ctor_m71CDBE7FCCDB7C131A251A1C0644CCA135FBB4CB (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExampleFSM/<Fall>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__11_System_IDisposable_Dispose_m4562C991353087BF2208D415E9F2E67873307BCD (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExampleFSM/<Fall>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFallU3Ed__11_MoveNext_m74933AA0BACECDF7DA0A1EA60D2B3DE9BA6DB569 (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animator.SetTrigger("isFall");
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___animator_5;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, NULL);
	}

IL_002e:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ChangeState(PlayerState.Idle);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_6 = V_1;
		NullCheck(L_6);
		ExampleFSM_ChangeState_m40062BA0951C7800BDBF76F4F27B672581416A9D(L_6, 0, NULL);
		// while (true)
		goto IL_002e;
	}
}
// System.Object ExampleFSM/<Fall>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFallU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4E21F5EBCFA1370A6E45E5F129CFBB9AD3AA9987 (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExampleFSM/<Fall>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFallU3Ed__11_System_Collections_IEnumerator_Reset_m00604BDA4EEE431DC6753FFAEECFE919916026B2 (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFallU3Ed__11_System_Collections_IEnumerator_Reset_m00604BDA4EEE431DC6753FFAEECFE919916026B2_RuntimeMethod_var)));
	}
}
// System.Object ExampleFSM/<Fall>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFallU3Ed__11_System_Collections_IEnumerator_get_Current_mAD2BF39D79C669687442AD9E844DDD98FB781EE6 (U3CFallU3Ed__11_tC74FC57E414FDBB4FB3B101A56200EEEDAF393C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleFSM/<Land>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLandU3Ed__12__ctor_mCEB29F7A626785B3C764FD045EE3AF6128C27F60 (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExampleFSM/<Land>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLandU3Ed__12_System_IDisposable_Dispose_m39AF3354CEFF1E15519312C1561EB8C15137AD79 (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExampleFSM/<Land>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLandU3Ed__12_MoveNext_mC82D180C09B60E60DDD0311C7272F7B8C09D64A1 (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7AC143DDDB8487C9E02C4C58A298BFA181DFCB1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animator.SetTrigger("isLand");
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___animator_5;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteralF7AC143DDDB8487C9E02C4C58A298BFA181DFCB1, NULL);
	}

IL_002e:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_002e;
	}
}
// System.Object ExampleFSM/<Land>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLandU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m364C2C9707885B897CDFDD13D1C4C5A32AC24BEE (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExampleFSM/<Land>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLandU3Ed__12_System_Collections_IEnumerator_Reset_mBAD8FE289859C66F5D9C16471B6DF38A788DA2A7 (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLandU3Ed__12_System_Collections_IEnumerator_Reset_mBAD8FE289859C66F5D9C16471B6DF38A788DA2A7_RuntimeMethod_var)));
	}
}
// System.Object ExampleFSM/<Land>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLandU3Ed__12_System_Collections_IEnumerator_get_Current_m8D3BF73C055C9DFBF7613E4BFCA3F79EA4D70257 (U3CLandU3Ed__12_t9621061F3F49FAB53B08160D5238845C6B98C0C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleFSM/<Idle>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__13__ctor_mD785591F6C7FAEB3637C361F2255FC7441298F5D (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExampleFSM/<Idle>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__13_System_IDisposable_Dispose_m21CB0C60C6C43F8FA9D6FF62EA4ADC0F98CE8576 (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExampleFSM/<Idle>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIdleU3Ed__13_MoveNext_mE4AC3AC3886D594D62FB28EC6DD63912F89A4892 (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animator.SetBool("isWalk", false);
		ExampleFSM_t86D18718667F2A849DB2245EC826C31C89A603B1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___animator_5;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)0, NULL);
	}

IL_002f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_002f;
	}
}
// System.Object ExampleFSM/<Idle>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIdleU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5E4C27A60AE68E19E9EB6184DB860B0335D32E44 (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExampleFSM/<Idle>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__13_System_Collections_IEnumerator_Reset_m9B4D8E1EEB0918AFFADCBA1F627CE8E2A078E64F (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIdleU3Ed__13_System_Collections_IEnumerator_Reset_m9B4D8E1EEB0918AFFADCBA1F627CE8E2A078E64F_RuntimeMethod_var)));
	}
}
// System.Object ExampleFSM/<Idle>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIdleU3Ed__13_System_Collections_IEnumerator_get_Current_m03935143D4BFB489A888B894A15AE4A8A06EBD7F (U3CIdleU3Ed__13_tD5CB9293BE7B0D99B0333EFEA91DA5B05B022DCA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Human::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Human_Awake_mAF03602FD0421F070AC89947F61F35BA9B0EA1C4 (Human_t30387D2A1A4AC2745EF3DB3EE13FE7614DA9B171* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.gameObject.GetComponent<SpriteRenderer>().enabled = false;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// falconNPC.gameObject.GetComponent<SpriteRenderer>().enabled = false;
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_3 = __this->___falconNPC_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// animator = this.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_6);
		// }
		return;
	}
}
// System.Void Human::Appear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Human_Appear_m671A34C785FD86793ABCF2E31FB0246A0EB5EAC3 (Human_t30387D2A1A4AC2745EF3DB3EE13FE7614DA9B171* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.gameObject.GetComponent<SpriteRenderer>().enabled = true;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// falconNPC.gameObject.GetComponent<SpriteRenderer>().enabled = true;
		FalconNPC_t23FCE2B3BC112CA51F759C53572091C6A7247EFC* L_3 = __this->___falconNPC_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)1, NULL);
		// Destroy(gameObject, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_6, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Human::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Human__ctor_mCF3E65FB1A68022A71F7E4AF3D2AE3F256669A8F (Human_t30387D2A1A4AC2745EF3DB3EE13FE7614DA9B171* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IdleState::OnEnter(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState_OnEnter_m9220CB438B66C2E2EB9473CA632563BEEF23DA56 (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.player = player;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___player0;
		__this->___player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_0), (void*)L_0);
		// animator = player.gameObject.GetComponent<Animator>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = ___player0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_1), (void*)L_3);
		// spriteRenderer = player.gameObject.GetComponent<SpriteRenderer>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ___player0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___spriteRenderer_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_3), (void*)L_6);
		// rb = player.GetComponent<Rigidbody2D>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = ___player0;
		NullCheck(L_7);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(L_7, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_2), (void*)L_8);
		// }
		return;
	}
}
// System.Void IdleState::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState_OnUpdate_m3270A018A8BF36DBF384E335AF6C20B793AC141A (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isDown && (Input.GetAxisRaw("Horizontal") != 0 || Input.GetButtonDown("Jump")
		//     || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift)
		//     || rb.velocity.y < 0 || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift)))
		bool L_0 = __this->___isDown_4;
		if (L_0)
		{
			goto IL_007c;
		}
	}
	{
		float L_1;
		L_1 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (L_2)
		{
			goto IL_006c;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)304), NULL);
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)303), NULL);
		if (L_4)
		{
			goto IL_006c;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rb_2;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_5, NULL);
		float L_7 = L_6.___y_1;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_006c;
		}
	}
	{
		bool L_8;
		L_8 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)304), NULL);
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		bool L_9;
		L_9 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)303), NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}

IL_006c:
	{
		// player.SetState("MoveState");
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___player_0;
		NullCheck(L_10);
		Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3(L_10, _stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3, NULL);
	}

IL_007c:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_11;
		L_11 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		// player.SetState("AttackState");
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = __this->___player_0;
		NullCheck(L_12);
		Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3(L_12, _stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72, NULL);
	}

IL_0094:
	{
		// if(Input.GetKey(KeyCode.DownArrow))
		bool L_13;
		L_13 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)274), NULL);
		if (!L_13)
		{
			goto IL_00f6;
		}
	}
	{
		// animator.SetBool("isDown", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_1;
		NullCheck(L_14);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_14, _stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215, (bool)1, NULL);
		// isDown = true;
		__this->___isDown_4 = (bool)1;
		// if(Input.GetAxisRaw("Horizontal") == -1)
		float L_15;
		L_15 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_15) == ((float)(-1.0f)))))
		{
			goto IL_00d7;
		}
	}
	{
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___spriteRenderer_3;
		NullCheck(L_16);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_16, (bool)1, NULL);
		goto IL_010e;
	}

IL_00d7:
	{
		// else if (Input.GetAxisRaw("Horizontal") == 1)
		float L_17;
		L_17 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_17) == ((float)(1.0f)))))
		{
			goto IL_010e;
		}
	}
	{
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___spriteRenderer_3;
		NullCheck(L_18);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_18, (bool)0, NULL);
		goto IL_010e;
	}

IL_00f6:
	{
		// animator.SetBool("isDown", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___animator_1;
		NullCheck(L_19);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_19, _stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215, (bool)0, NULL);
		// isDown = false;
		__this->___isDown_4 = (bool)0;
	}

IL_010e:
	{
		// if(Input.GetKeyUp(KeyCode.DownArrow) || rb.velocity.y < 0)
		bool L_20;
		L_20 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)274), NULL);
		if (L_20)
		{
			goto IL_0131;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21 = __this->___rb_2;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_21, NULL);
		float L_23 = L_22.___y_1;
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_0149;
		}
	}

IL_0131:
	{
		// animator.SetBool("isDown", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_1;
		NullCheck(L_24);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_24, _stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215, (bool)0, NULL);
		// isDown = false;
		__this->___isDown_4 = (bool)0;
	}

IL_0149:
	{
		// }
		return;
	}
}
// System.Void IdleState::OnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState_OnExit_m556CB305831E861A2EE268E5FA222345A0502AF9 (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isDown", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_1;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral049972E9C2C210C7DAC300004D7901BCBC7D3215, (bool)0, NULL);
		// isDown = false;
		__this->___isDown_4 = (bool)0;
		// player.prevState = "IdleState";
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_0;
		NullCheck(L_1);
		L_1->___prevState_6 = _stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___prevState_6), (void*)_stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96);
		// }
		return;
	}
}
// System.Void IdleState::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState_OnFixedUpdate_mC1D8498337952041EA6DD37DAEA4D1F0D0E880ED (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void IdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdleState__ctor_m11E8D006FD2FD7FF595880BEA5EA132AC667FD46 (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveState::OnEnter(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState_OnEnter_m94DAAC1DD13875162A65E33B15FCB2B0F6693CF6 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.player = player;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___player0;
		__this->___player_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_0), (void*)L_0);
		// playerGO = player.gameObject;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = ___player0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___playerGO_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerGO_1), (void*)L_2);
		// animator = playerGO.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playerGO_1;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_2), (void*)L_4);
		// spriteRenderer = playerGO.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___playerGO_1;
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___spriteRenderer_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_3), (void*)L_6);
		// rigid = playerGO.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___playerGO_1;
		NullCheck(L_7);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_7, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->___rigid_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_4), (void*)L_8);
		// playerCol = playerGO.GetComponent<BoxCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___playerGO_1;
		NullCheck(L_9);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_10;
		L_10 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_9, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		__this->___playerCol_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCol_6), (void*)L_10);
		// coWalk = player.StartCoroutine(Walk());
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = ___player0;
		RuntimeObject* L_12;
		L_12 = MoveState_Walk_m9A9EAF3D9344AECF70AE7BE4A3DBEDD6636D121C(__this, NULL);
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_12, NULL);
		__this->___coWalk_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coWalk_12), (void*)L_13);
		// coJump = player.StartCoroutine(Jump());
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = ___player0;
		RuntimeObject* L_15;
		L_15 = MoveState_Jump_m2602F125641D449772CFDDC15B4FAF541BE8B345(__this, NULL);
		NullCheck(L_14);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_14, L_15, NULL);
		__this->___coJump_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coJump_13), (void*)L_16);
		// coDash = player.StartCoroutine(Dash());
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = ___player0;
		RuntimeObject* L_18;
		L_18 = MoveState_Dash_m008956E23B4A05E14C3932CFDD75436C1E9CA6D4(__this, NULL);
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_19;
		L_19 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_17, L_18, NULL);
		__this->___coDash_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coDash_14), (void*)L_19);
		// }
		return;
	}
}
// System.Void MoveState::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState_OnUpdate_mF92F9110213502E0E1CAC9729DA077ADBDC7623C (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		// player.StopCoroutine(coWalk);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___coWalk_12;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_1, L_2, NULL);
		// player.StopCoroutine(coJump);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4 = __this->___coJump_13;
		NullCheck(L_3);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_3, L_4, NULL);
		// player.StopCoroutine(coDash);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6 = __this->___coDash_14;
		NullCheck(L_5);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_5, L_6, NULL);
		// animator.SetBool("isGround", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_2;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB, (bool)1, NULL);
		// player.SetState("AttackState");
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = __this->___player_0;
		NullCheck(L_8);
		Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3(L_8, _stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void MoveState::OnFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState_OnFixedUpdate_m7A2EEC3BC5305D262132DF020DDFD1AC9D416B35 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_1 = NULL;
	int32_t V_2 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// rayHits[0] = Physics2D.Raycast(new Vector3(rigid.position.x - (playerCol.bounds.size.x / 2), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down, 0.2f, LayerMask.GetMask("Platform"));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = __this->___rayHits_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigid_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		float L_3 = L_2.___x_0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = __this->___playerCol_6;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_7 = L_6.___x_2;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = __this->___rigid_4;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_8, NULL);
		float L_10 = L_9.___y_1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = __this->___playerCol_6;
		NullCheck(L_11);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12;
		L_12 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_11, NULL);
		V_0 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)il2cpp_codegen_subtract(L_3, ((float)(L_7/(2.0f))))), ((float)il2cpp_codegen_subtract(L_10, ((float)(L_14/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_17, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		int32_t L_21;
		L_21 = LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_22;
		L_22 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_16, L_18, (0.200000003f), L_21, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_22);
		// Debug.DrawRay(new Vector3(rigid.position.x - (playerCol.bounds.size.x / 3), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down * 0.2f, new Color(1, 1, 1));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_23 = __this->___rigid_4;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_23, NULL);
		float L_25 = L_24.___x_0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_26 = __this->___playerCol_6;
		NullCheck(L_26);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27;
		L_27 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_26, NULL);
		V_0 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_29 = L_28.___x_2;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_30 = __this->___rigid_4;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_30, NULL);
		float L_32 = L_31.___y_1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_33 = __this->___playerCol_6;
		NullCheck(L_33);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_34;
		L_34 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_33, NULL);
		V_0 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_36 = L_35.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)il2cpp_codegen_subtract(L_25, ((float)(L_29/(3.0f))))), ((float)il2cpp_codegen_subtract(L_32, ((float)(L_36/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_38, (0.200000003f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		memset((&L_40), 0, sizeof(L_40));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_40), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_37, L_39, L_40, NULL);
		// rayHits[1] = Physics2D.Raycast(new Vector3(rigid.position.x, rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down, 0.2f, LayerMask.GetMask("Platform"));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_41 = __this->___rayHits_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_42 = __this->___rigid_4;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_42, NULL);
		float L_44 = L_43.___x_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_45 = __this->___rigid_4;
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_45, NULL);
		float L_47 = L_46.___y_1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_48 = __this->___playerCol_6;
		NullCheck(L_48);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_49;
		L_49 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_48, NULL);
		V_0 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_51 = L_50.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), L_44, ((float)il2cpp_codegen_subtract(L_47, ((float)(L_51/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_54, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		int32_t L_58;
		L_58 = LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E(L_57, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_59;
		L_59 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_53, L_55, (0.200000003f), L_58, NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_59);
		// Debug.DrawRay(new Vector3(rigid.position.x, rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down * 0.2f, new Color(1, 1, 1));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_60 = __this->___rigid_4;
		NullCheck(L_60);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_60, NULL);
		float L_62 = L_61.___x_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_63 = __this->___rigid_4;
		NullCheck(L_63);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_63, NULL);
		float L_65 = L_64.___y_1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_66 = __this->___playerCol_6;
		NullCheck(L_66);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_67;
		L_67 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_66, NULL);
		V_0 = L_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_69 = L_68.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), L_62, ((float)il2cpp_codegen_subtract(L_65, ((float)(L_69/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_71, (0.200000003f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_73;
		memset((&L_73), 0, sizeof(L_73));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_73), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_70, L_72, L_73, NULL);
		// rayHits[2] = Physics2D.Raycast(new Vector3(rigid.position.x + (playerCol.bounds.size.x / 2), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down, 0.2f, LayerMask.GetMask("Platform"));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_74 = __this->___rayHits_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_75 = __this->___rigid_4;
		NullCheck(L_75);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
		L_76 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_75, NULL);
		float L_77 = L_76.___x_0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_78 = __this->___playerCol_6;
		NullCheck(L_78);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_79;
		L_79 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_78, NULL);
		V_0 = L_79;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_81 = L_80.___x_2;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_82 = __this->___rigid_4;
		NullCheck(L_82);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		L_83 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_82, NULL);
		float L_84 = L_83.___y_1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_85 = __this->___playerCol_6;
		NullCheck(L_85);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_86;
		L_86 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_85, NULL);
		V_0 = L_86;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_88 = L_87.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), ((float)il2cpp_codegen_add(L_77, ((float)(L_81/(2.0f))))), ((float)il2cpp_codegen_subtract(L_84, ((float)(L_88/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90;
		L_90 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_91, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_93 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_93;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		int32_t L_95;
		L_95 = LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E(L_94, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_96;
		L_96 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_90, L_92, (0.200000003f), L_95, NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(2), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_96);
		// Debug.DrawRay(new Vector3(rigid.position.x + (playerCol.bounds.size.x / 3), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down * 0.2f, new Color(1, 1, 1));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_97 = __this->___rigid_4;
		NullCheck(L_97);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		L_98 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_97, NULL);
		float L_99 = L_98.___x_0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_100 = __this->___playerCol_6;
		NullCheck(L_100);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_101;
		L_101 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_100, NULL);
		V_0 = L_101;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_103 = L_102.___x_2;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_104 = __this->___rigid_4;
		NullCheck(L_104);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		L_105 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_104, NULL);
		float L_106 = L_105.___y_1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_107 = __this->___playerCol_6;
		NullCheck(L_107);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_108;
		L_108 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_107, NULL);
		V_0 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_110 = L_109.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_111), ((float)il2cpp_codegen_add(L_99, ((float)(L_103/(3.0f))))), ((float)il2cpp_codegen_subtract(L_106, ((float)(L_110/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_112, (0.200000003f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_114;
		memset((&L_114), 0, sizeof(L_114));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_114), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_111, L_113, L_114, NULL);
		// foreach (var rayHit in rayHits)
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_115 = __this->___rayHits_5;
		V_1 = L_115;
		V_2 = 0;
		goto IL_0388;
	}

IL_035d:
	{
		// foreach (var rayHit in rayHits)
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_116 = V_1;
		int32_t L_117 = V_2;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_3 = L_119;
		// if (rayHit.collider != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_120;
		L_120 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_3), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_121;
		L_121 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_120, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_121)
		{
			goto IL_037d;
		}
	}
	{
		// isGround = true;
		__this->___isGround_10 = (bool)1;
		// break;
		goto IL_038e;
	}

IL_037d:
	{
		// isGround = false;
		__this->___isGround_10 = (bool)0;
		int32_t L_122 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0388:
	{
		// foreach (var rayHit in rayHits)
		int32_t L_123 = V_2;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_124 = V_1;
		NullCheck(L_124);
		if ((((int32_t)L_123) < ((int32_t)((int32_t)(((RuntimeArray*)L_124)->max_length)))))
		{
			goto IL_035d;
		}
	}

IL_038e:
	{
		// if (!isDash && isWalk) //???
		bool L_125 = __this->___isDash_11;
		if (L_125)
		{
			goto IL_0408;
		}
	}
	{
		bool L_126 = __this->___isWalk_7;
		if (!L_126)
		{
			goto IL_0408;
		}
	}
	{
		// player.direction = new Vector3(axisX, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_127 = __this->___player_0;
		float L_128 = __this->___axisX_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_129), L_128, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_127);
		L_127->___direction_13 = L_129;
		// playerGO.transform.position += Vector3.right * axisX * player.WalkSpeed * Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = __this->___playerGO_1;
		NullCheck(L_130);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_130, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132 = L_131;
		NullCheck(L_132);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_132, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_135 = __this->___axisX_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_134, L_135, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_137 = __this->___player_0;
		NullCheck(L_137);
		float L_138;
		L_138 = Player_get_WalkSpeed_m2DF1008F29A30B73ADD6B3357FCB37F42D60B347_inline(L_137, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_136, L_138, NULL);
		float L_140;
		L_140 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_139, L_140, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_133, L_141, NULL);
		NullCheck(L_132);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_132, L_142, NULL);
		goto IL_048a;
	}

IL_0408:
	{
		// else if(isDash)//??
		bool L_143 = __this->___isDash_11;
		if (!L_143)
		{
			goto IL_048a;
		}
	}
	{
		// playerGO.transform.position += direction * 1.5f * player.WalkSpeed * Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144 = __this->___playerGO_1;
		NullCheck(L_144);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_144, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_146 = L_145;
		NullCheck(L_146);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_146, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = __this->___direction_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_148, (1.5f), NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_150 = __this->___player_0;
		NullCheck(L_150);
		float L_151;
		L_151 = Player_get_WalkSpeed_m2DF1008F29A30B73ADD6B3357FCB37F42D60B347_inline(L_150, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_149, L_151, NULL);
		float L_153;
		L_153 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_152, L_153, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_147, L_154, NULL);
		NullCheck(L_146);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_146, L_155, NULL);
		// playerGO.transform.position =  new Vector3(playerGO.transform.position.x, dashY, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = __this->___playerGO_1;
		NullCheck(L_156);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
		L_157 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_156, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = __this->___playerGO_1;
		NullCheck(L_158);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
		L_159 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_158, NULL);
		NullCheck(L_159);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_159, NULL);
		float L_161 = L_160.___x_2;
		float L_162 = __this->___dashY_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		memset((&L_163), 0, sizeof(L_163));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_163), L_161, L_162, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_157);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_157, L_163, NULL);
	}

IL_048a:
	{
		// if (rigid.velocity.y < 0f)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_164 = __this->___rigid_4;
		NullCheck(L_164);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165;
		L_165 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_164, NULL);
		float L_166 = L_165.___y_1;
		if ((!(((float)L_166) < ((float)(0.0f)))))
		{
			goto IL_0514;
		}
	}
	{
		// isJump = false;
		__this->___isJump_8 = (bool)0;
		// animator.SetBool("isJump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_167 = __this->___animator_2;
		NullCheck(L_167);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_167, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)0, NULL);
		// isWalk = false;
		__this->___isWalk_7 = (bool)0;
		// animator.SetBool("isWalk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_168 = __this->___animator_2;
		NullCheck(L_168);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_168, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)0, NULL);
		// if (!isGround)
		bool L_169 = __this->___isGround_10;
		if (L_169)
		{
			goto IL_04f3;
		}
	}
	{
		// isFall = true;
		__this->___isFall_9 = (bool)1;
		// animator.SetBool("isFall", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_170 = __this->___animator_2;
		NullCheck(L_170);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_170, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)1, NULL);
		goto IL_0563;
	}

IL_04f3:
	{
		// jumpCount = 0;
		__this->___jumpCount_17 = 0;
		// isFall = false;
		__this->___isFall_9 = (bool)0;
		// animator.SetBool("isFall", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_171 = __this->___animator_2;
		NullCheck(L_171);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_171, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)0, NULL);
		goto IL_0563;
	}

IL_0514:
	{
		// else if (rigid.velocity.y == 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_172 = __this->___rigid_4;
		NullCheck(L_172);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_173;
		L_173 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_172, NULL);
		float L_174 = L_173.___y_1;
		if ((!(((float)L_174) == ((float)(0.0f)))))
		{
			goto IL_0563;
		}
	}
	{
		// if(isGround)
		bool L_175 = __this->___isGround_10;
		if (!L_175)
		{
			goto IL_0563;
		}
	}
	{
		// jumpCount = 0;
		__this->___jumpCount_17 = 0;
		// isFall = false;
		__this->___isFall_9 = (bool)0;
		// animator.SetBool("isFall", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_176 = __this->___animator_2;
		NullCheck(L_176);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_176, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)0, NULL);
		// animator.SetBool("isJump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_177 = __this->___animator_2;
		NullCheck(L_177);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_177, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)0, NULL);
	}

IL_0563:
	{
		// if (!isWalk && !isJump && !isFall && !isDash)
		bool L_178 = __this->___isWalk_7;
		if (L_178)
		{
			goto IL_05d7;
		}
	}
	{
		bool L_179 = __this->___isJump_8;
		if (L_179)
		{
			goto IL_05d7;
		}
	}
	{
		bool L_180 = __this->___isFall_9;
		if (L_180)
		{
			goto IL_05d7;
		}
	}
	{
		bool L_181 = __this->___isDash_11;
		if (L_181)
		{
			goto IL_05d7;
		}
	}
	{
		// player.StopCoroutine(coWalk);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_182 = __this->___player_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_183 = __this->___coWalk_12;
		NullCheck(L_182);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_182, L_183, NULL);
		// player.StopCoroutine(coJump);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_184 = __this->___player_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_185 = __this->___coJump_13;
		NullCheck(L_184);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_184, L_185, NULL);
		// player.StopCoroutine(coDash);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_186 = __this->___player_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_187 = __this->___coDash_14;
		NullCheck(L_186);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_186, L_187, NULL);
		// animator.SetBool("isGround", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_188 = __this->___animator_2;
		NullCheck(L_188);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_188, _stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB, (bool)1, NULL);
		// player.SetState("IdleState");
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_189 = __this->___player_0;
		NullCheck(L_189);
		Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3(L_189, _stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96, NULL);
	}

IL_05d7:
	{
		// }
		return;
	}
}
// System.Void MoveState::OnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState_OnExit_mD751D80729A221114274FFDDEFFF7641595D8614 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.prevState = "MoveState";
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_0;
		NullCheck(L_0);
		L_0->___prevState_6 = _stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___prevState_6), (void*)_stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3);
		// }
		return;
	}
}
// System.Collections.IEnumerator MoveState::Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveState_Walk_m9A9EAF3D9344AECF70AE7BE4A3DBEDD6636D121C (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* L_0 = (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26*)il2cpp_codegen_object_new(U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWalkU3Ed__27__ctor_m9ABB1BE1207804659BDA412C51796B3014233D58(L_0, 0, NULL);
		U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator MoveState::Dash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveState_Dash_m008956E23B4A05E14C3932CFDD75436C1E9CA6D4 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* L_0 = (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E*)il2cpp_codegen_object_new(U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDashU3Ed__28__ctor_m6505C5C31DEE24E1ADC8B305858D13A1714C84E5(L_0, 0, NULL);
		U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator MoveState::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveState_Jump_m2602F125641D449772CFDDC15B4FAF541BE8B345 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* L_0 = (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471*)il2cpp_codegen_object_new(U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpU3Ed__29__ctor_mD461B50370C7B62FB9D9F2EDFC3EF07FF0D18CC7(L_0, 0, NULL);
		U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveState__ctor_m4EBF19317152E998066B8F1BA2E869F4CAC6D180 (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private RaycastHit2D[] rayHits = new RaycastHit2D[3];
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___rayHits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rayHits_5), (void*)L_0);
		// private float jumpTimeLimit = 0.25f;
		__this->___jumpTimeLimit_15 = (0.25f);
		// private float dashTimeLimit = 0.3f;
		__this->___dashTimeLimit_18 = (0.300000012f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveState/<Walk>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__27__ctor_m9ABB1BE1207804659BDA412C51796B3014233D58 (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoveState/<Walk>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__27_System_IDisposable_Dispose_mEB99755E190397F964CB389BD4B58F76BA909CA3 (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoveState/<Walk>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWalkU3Ed__27_MoveNext_m3BBE81FEEA59EB7FA76DA96C9AA0CBA99B1BB928 (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// axisX = Input.GetAxisRaw("Horizontal");
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_4 = V_1;
		float L_5;
		L_5 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		NullCheck(L_4);
		L_4->___axisX_20 = L_5;
		// if (axisX != 0)
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___axisX_20;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		// isWalk = true;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_8 = V_1;
		NullCheck(L_8);
		L_8->___isWalk_7 = (bool)1;
		// animator.SetBool("isWalk", true);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_9 = V_1;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = L_9->___animator_2;
		NullCheck(L_10);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)1, NULL);
		// spriteRenderer.flipX = axisX < 0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_11 = V_1;
		NullCheck(L_11);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = L_11->___spriteRenderer_3;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___axisX_20;
		NullCheck(L_12);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_12, (bool)((((float)L_14) < ((float)(0.0f)))? 1 : 0), NULL);
		goto IL_0088;
	}

IL_0070:
	{
		// isWalk = false;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_15 = V_1;
		NullCheck(L_15);
		L_15->___isWalk_7 = (bool)0;
		// animator.SetBool("isWalk", false);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_16 = V_1;
		NullCheck(L_16);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = L_16->___animator_2;
		NullCheck(L_17);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_17, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)0, NULL);
	}

IL_0088:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0098:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0021;
	}
}
// System.Object MoveState/<Walk>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDC4C70DA2550C83273C1C664DF9BF52AF2C62B9C (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoveState/<Walk>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkU3Ed__27_System_Collections_IEnumerator_Reset_mF9F306B0FB16104774B50C5A496A8B666EDDF151 (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWalkU3Ed__27_System_Collections_IEnumerator_Reset_mF9F306B0FB16104774B50C5A496A8B666EDDF151_RuntimeMethod_var)));
	}
}
// System.Object MoveState/<Walk>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkU3Ed__27_System_Collections_IEnumerator_get_Current_m206A8A48644A89F79A774FFCF769679B0DB79358 (U3CWalkU3Ed__27_t58A8FA8F513B152FC610E7EF6950BC9523886D26* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveState/<Dash>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__28__ctor_m6505C5C31DEE24E1ADC8B305858D13A1714C84E5 (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoveState/<Dash>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__28_System_IDisposable_Dispose_m3987A90CC3FC4DEFFCBAA34F594FD5043B1A2F99 (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoveState/<Dash>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDashU3Ed__28_MoveNext_mB401AD0E0771C31A6F2F48B10BE2D90909501D19 (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0106;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// if (Input.GetKeyDown(KeyCode.LeftShift) && !isDash)
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)304), NULL);
		if (!L_4)
		{
			goto IL_009a;
		}
	}
	{
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___isDash_11;
		if (L_6)
		{
			goto IL_009a;
		}
	}
	{
		// isDash = true;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_7 = V_1;
		NullCheck(L_7);
		L_7->___isDash_11 = (bool)1;
		// direction = Vector3.right;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		NullCheck(L_8);
		L_8->___direction_21 = L_9;
		// dashY = playerGO.transform.position.y;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_10 = V_1;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___playerGO_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___y_3;
		NullCheck(L_10);
		L_10->___dashY_22 = L_15;
		// if (spriteRenderer.flipX)
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_16 = V_1;
		NullCheck(L_16);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = L_16->___spriteRenderer_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_17, NULL);
		if (!L_18)
		{
			goto IL_008a;
		}
	}
	{
		// direction = Vector3.left;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		NullCheck(L_19);
		L_19->___direction_21 = L_20;
		// player.direction = Vector3.left;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_21 = V_1;
		NullCheck(L_21);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_22 = L_21->___player_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		NullCheck(L_22);
		L_22->___direction_13 = L_23;
	}

IL_008a:
	{
		// rigid.velocity = Vector2.zero;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_24 = V_1;
		NullCheck(L_24);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25 = L_24->___rigid_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_25);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_25, L_26, NULL);
	}

IL_009a:
	{
		// if(isDash)
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_27 = V_1;
		NullCheck(L_27);
		bool L_28 = L_27->___isDash_11;
		if (!L_28)
		{
			goto IL_00f6;
		}
	}
	{
		// dashTimer += Time.deltaTime;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_29 = V_1;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->___dashTimer_19;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_29);
		L_29->___dashTimer_19 = ((float)il2cpp_codegen_add(L_31, L_32));
		// animator.SetBool("isDash", true);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_33 = V_1;
		NullCheck(L_33);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = L_33->___animator_2;
		NullCheck(L_34);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_34, _stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6, (bool)1, NULL);
		// if (dashTimer > dashTimeLimit)
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_35 = V_1;
		NullCheck(L_35);
		float L_36 = L_35->___dashTimer_19;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___dashTimeLimit_18;
		if ((!(((float)L_36) > ((float)L_38))))
		{
			goto IL_00f6;
		}
	}
	{
		// animator.SetBool("isDash", false);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_39 = V_1;
		NullCheck(L_39);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40 = L_39->___animator_2;
		NullCheck(L_40);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_40, _stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6, (bool)0, NULL);
		// isDash = false;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_41 = V_1;
		NullCheck(L_41);
		L_41->___isDash_11 = (bool)0;
		// dashTimer = 0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_42 = V_1;
		NullCheck(L_42);
		L_42->___dashTimer_19 = (0.0f);
	}

IL_00f6:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0106:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0021;
	}
}
// System.Object MoveState/<Dash>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDashU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1868C748394B81FF91DE7689025BAE4F4FDDB0E (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoveState/<Dash>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDashU3Ed__28_System_Collections_IEnumerator_Reset_mE02196650AAAFA697FA07E53C94FDFAD42BE0F88 (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDashU3Ed__28_System_Collections_IEnumerator_Reset_mE02196650AAAFA697FA07E53C94FDFAD42BE0F88_RuntimeMethod_var)));
	}
}
// System.Object MoveState/<Dash>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDashU3Ed__28_System_Collections_IEnumerator_get_Current_mC4536A3C9D654825F31E1BEFE5EB184F05517BD7 (U3CDashU3Ed__28_t204D0D89EDFC12755B9A9D50C6237784C673255E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveState/<Jump>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__29__ctor_mD461B50370C7B62FB9D9F2EDFC3EF07FF0D18CC7 (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoveState/<Jump>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__29_System_IDisposable_Dispose_mAC015ABE1F9455A3F0D4411B0A7BB9D226FB1BF1 (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoveState/<Jump>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpU3Ed__29_MoveNext_m3DA01338329D0BF033110F6C95FA4C3684D0F7C9 (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_014b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_4;
		L_4 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_4)
		{
			goto IL_00d4;
		}
	}
	{
		// jumpTimer = 0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_5 = V_1;
		NullCheck(L_5);
		L_5->___jumpTimer_16 = (0.0f);
		// jumpCount--;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_6 = V_1;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___jumpCount_17;
		NullCheck(L_6);
		L_6->___jumpCount_17 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// isJump = true;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_9 = V_1;
		NullCheck(L_9);
		L_9->___isJump_8 = (bool)1;
		// animator.SetBool("isJump", true);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_10 = V_1;
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = L_10->___animator_2;
		NullCheck(L_11);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)1, NULL);
		// if (jumpCount == -1 && isGround)
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___jumpCount_17;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_009f;
		}
	}
	{
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_14 = V_1;
		NullCheck(L_14);
		bool L_15 = L_14->___isGround_10;
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		// GameObject.Instantiate(player.Effect_JumpOnGround_Prefab, player.EffectPos_Jump.transform.position, Quaternion.identity);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_16 = V_1;
		NullCheck(L_16);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = L_16->___player_0;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___Effect_JumpOnGround_Prefab_7;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_19 = V_1;
		NullCheck(L_19);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_20 = L_19->___player_0;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___EffectPos_Jump_9;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_18, L_23, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		goto IL_00d4;
	}

IL_009f:
	{
		// else if (jumpCount == -2)
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___jumpCount_17;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00d4;
		}
	}
	{
		// GameObject.Instantiate(player.Effect_JumpOnAir_Prefab, player.EffectPos_Jump.transform.position, Quaternion.identity);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_28 = V_1;
		NullCheck(L_28);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_29 = L_28->___player_0;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___Effect_JumpOnAir_Prefab_8;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_31 = V_1;
		NullCheck(L_31);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_32 = L_31->___player_0;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->___EffectPos_Jump_9;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_30, L_35, L_36, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_00d4:
	{
		// if (Input.GetButton("Jump") && jumpTimer <= jumpTimeLimit && jumpCount >= -2)
		bool L_38;
		L_38 = Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_38)
		{
			goto IL_0129;
		}
	}
	{
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->___jumpTimer_16;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_41 = V_1;
		NullCheck(L_41);
		float L_42 = L_41->___jumpTimeLimit_15;
		if ((!(((float)L_40) <= ((float)L_42))))
		{
			goto IL_0129;
		}
	}
	{
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = L_43->___jumpCount_17;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)-2))))
		{
			goto IL_0129;
		}
	}
	{
		// rigid.velocity = Vector2.zero;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_45 = V_1;
		NullCheck(L_45);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_46 = L_45->___rigid_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_46);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_46, L_47, NULL);
		// rigid.AddForce(Vector2.up * player.JumpPower, ForceMode2D.Impulse);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_48 = V_1;
		NullCheck(L_48);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_49 = L_48->___rigid_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_51 = V_1;
		NullCheck(L_51);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_52 = L_51->___player_0;
		NullCheck(L_52);
		float L_53;
		L_53 = Player_get_JumpPower_m1376D29F3D65E14BF1D1EBE92E873BAF90AFDF75_inline(L_52, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_50, L_53, NULL);
		NullCheck(L_49);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_49, L_54, 1, NULL);
	}

IL_0129:
	{
		// jumpTimer += Time.deltaTime;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_55 = V_1;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_56 = V_1;
		NullCheck(L_56);
		float L_57 = L_56->___jumpTimer_16;
		float L_58;
		L_58 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_55);
		L_55->___jumpTimer_16 = ((float)il2cpp_codegen_add(L_57, L_58));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_014b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0021;
	}
}
// System.Object MoveState/<Jump>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E1A98F19F178183F6615483B94CA6D1A003E55E (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoveState/<Jump>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__29_System_Collections_IEnumerator_Reset_mE3C6BF8890428D8C67F1E26F8E57B86FDADEDE36 (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpU3Ed__29_System_Collections_IEnumerator_Reset_mE3C6BF8890428D8C67F1E26F8E57B86FDADEDE36_RuntimeMethod_var)));
	}
}
// System.Object MoveState/<Jump>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__29_System_Collections_IEnumerator_get_Current_m8E0CDEB910FED6FA38D11D4D9EC12E4CAD4DD901 (U3CJumpU3Ed__29_tEE10EF5A9A3CB45D6B425C668D47996C8CDB0471* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Player::get_WalkSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_WalkSpeed_m2DF1008F29A30B73ADD6B3357FCB37F42D60B347 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// return walkSpeed;
		float L_0 = __this->___walkSpeed_14;
		return L_0;
	}
}
// System.Single Player::get_JumpPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_JumpPower_m1376D29F3D65E14BF1D1EBE92E873BAF90AFDF75 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// return jumpPower;
		float L_0 = __this->___jumpPower_15;
		return L_0;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttackState_t7464014753840D8476E41DC181CE78F6AE16707B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8BF61FB0D8A2BFF4BA1E7CAC6E0365D9E91C95B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// direction = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		__this->___direction_13 = L_0;
		// stateMap = new Dictionary<string, IState>();
		Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* L_1 = (Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE*)il2cpp_codegen_object_new(Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m8BF61FB0D8A2BFF4BA1E7CAC6E0365D9E91C95B1(L_1, Dictionary_2__ctor_m8BF61FB0D8A2BFF4BA1E7CAC6E0365D9E91C95B1_RuntimeMethod_var);
		__this->___stateMap_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateMap_4), (void*)L_1);
		// stateName = "IdleState";
		V_0 = _stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96;
		// stateMap.Add(stateName, new IdleState());
		Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* L_2 = __this->___stateMap_4;
		String_t* L_3 = V_0;
		IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5* L_4 = (IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5*)il2cpp_codegen_object_new(IdleState_tE66960E1AD0152B3526AC8583C095ECC90694DA5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IdleState__ctor_m11E8D006FD2FD7FF595880BEA5EA132AC667FD46(L_4, NULL);
		NullCheck(L_2);
		Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3(L_2, L_3, L_4, Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3_RuntimeMethod_var);
		// stateName = "MoveState";
		V_0 = _stringLiteral51B4936534E2947DA7FFEC4A6A789EDB632B3AE3;
		// stateMap.Add(stateName, new MoveState());
		Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* L_5 = __this->___stateMap_4;
		String_t* L_6 = V_0;
		MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F* L_7 = (MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F*)il2cpp_codegen_object_new(MoveState_tD14C72AB72FA21D11CC37871172E1F511BDACB9F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MoveState__ctor_m4EBF19317152E998066B8F1BA2E869F4CAC6D180(L_7, NULL);
		NullCheck(L_5);
		Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3(L_5, L_6, L_7, Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3_RuntimeMethod_var);
		// stateName = "AttackState";
		V_0 = _stringLiteral62AD8437D189449395C9691B6921B18A4EB45B72;
		// stateMap.Add(stateName, new AttackState());
		Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* L_8 = __this->___stateMap_4;
		String_t* L_9 = V_0;
		AttackState_t7464014753840D8476E41DC181CE78F6AE16707B* L_10 = (AttackState_t7464014753840D8476E41DC181CE78F6AE16707B*)il2cpp_codegen_object_new(AttackState_t7464014753840D8476E41DC181CE78F6AE16707B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AttackState__ctor_m142A8841F387A39AF24585F9FD20F5583A6B2CCC(L_10, NULL);
		NullCheck(L_8);
		Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3(L_8, L_9, L_10, Dictionary_2_Add_m2299FD8EA9AAFAFAFD95CA4B636EC54255B5B6A3_RuntimeMethod_var);
		// SetState("IdleState");
		Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3(__this, _stringLiteralFC16378C9FBC96067CB935389FAC4AAED4E49B96, NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState.OnUpdate();
		RuntimeObject* L_0 = __this->___currentState_5;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IState::OnUpdate() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mEDDB0539FCD5145298CB87D4592DFFF98503AF9B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState.OnFixedUpdate();
		RuntimeObject* L_0 = __this->___currentState_5;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void IState::OnFixedUpdate() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Player::SetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetState_mC811C0F81089FD835F1F4A3C652D176930505AE3 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___stateName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0618949A68A2022E37C0566CDB0115C74243568E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (currentState != null)
		RuntimeObject* L_0 = __this->___currentState_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// currentState.OnExit();
		RuntimeObject* L_1 = __this->___currentState_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void IState::OnExit() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// IState nextState = stateMap[stateName];
		Dictionary_2_tC8885FD8F79D4C2540426DD731CB544B5C74D1BE* L_2 = __this->___stateMap_4;
		String_t* L_3 = ___stateName0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = Dictionary_2_get_Item_m0618949A68A2022E37C0566CDB0115C74243568E(L_2, L_3, Dictionary_2_get_Item_m0618949A68A2022E37C0566CDB0115C74243568E_RuntimeMethod_var);
		V_0 = L_4;
		// currentState = nextState;
		RuntimeObject* L_5 = V_0;
		__this->___currentState_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_5), (void*)L_5);
		// currentState.OnEnter(this);
		RuntimeObject* L_6 = __this->___currentState_5;
		NullCheck(L_6);
		InterfaceActionInvoker1< Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* >::Invoke(0 /* System.Void IState::OnEnter(Player) */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_6, __this);
		// currentState.OnUpdate();
		RuntimeObject* L_7 = __this->___currentState_5;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(1 /* System.Void IState::OnUpdate() */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_7);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// float walkSpeed = 0.5f;
		__this->___walkSpeed_14 = (0.5f);
		// float jumpPower = 0.3f;
		__this->___jumpPower_15 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_m6820D211A06B2E5E24795D7EBE67EE865F39BC43 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(timer());
		RuntimeObject* L_0;
		L_0 = Timer_timer_mE5EB7546ECAA806A89F6B7F51B61CDD8F9AFDC31(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Timer::timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_timer_mE5EB7546ECAA806A89F6B7F51B61CDD8F9AFDC31 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* L_0 = (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69*)il2cpp_codegen_object_new(U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CtimerU3Ed__3__ctor_m371740C45ECD120F178A488F22B5A3F7BB0E4F8D(L_0, 0, NULL);
		U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m5FF13F1DAD0527F97E229A1904A8AD662731C4B5 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// public float maxTime = 10;
		__this->___maxTime_5 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer/<timer>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimerU3Ed__3__ctor_m371740C45ECD120F178A488F22B5A3F7BB0E4F8D (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Timer/<timer>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimerU3Ed__3_System_IDisposable_Dispose_mB6FDCE5C863136CC42D0069928FFC01F8488D5CC (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Timer/<timer>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtimerU3Ed__3_MoveNext_mA39B4124F1DCEBE0A84A1AAFE300325EEA82EBB0 (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentTime = 0;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentTime_4 = (0.0f);
		goto IL_0054;
	}

IL_002b:
	{
		// currentTime = currentTime + Time.deltaTime;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_5 = V_1;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___currentTime_4;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_5);
		L_5->___currentTime_4 = ((float)il2cpp_codegen_add(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0054:
	{
		// while(currentTime > maxTime)
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___currentTime_4;
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___maxTime_5;
		if ((((float)L_10) > ((float)L_12)))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Timer/<timer>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CtimerU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE1CFEBC7F869825AB8B6475C49588F11D454DC09 (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Timer/<timer>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimerU3Ed__3_System_Collections_IEnumerator_Reset_m0F767B340A527EF4861209061321C728E44BC632 (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtimerU3Ed__3_System_Collections_IEnumerator_Reset_m0F767B340A527EF4861209061321C728E44BC632_RuntimeMethod_var)));
	}
}
// System.Object Timer/<timer>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CtimerU3Ed__3_System_Collections_IEnumerator_get_Current_m397DA9D85D6BADE3D6CB558E3982802587FB0AFB (U3CtimerU3Ed__3_t098B065D04DABBC97756AF879877E2C668D5EA69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m8ED3F2D1B7789917E0A65CEB89D94F10D834E180 (PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneFade::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneFade_Awake_mE16B60E6AFEA3357C57812859477E7C694714D8F (SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* __this, const RuntimeMethod* method) 
{
	{
		// isChanged = false;
		__this->___isChanged_7 = (bool)0;
		// isEnd = false;
		__this->___isEnd_8 = (bool)0;
		// }
		return;
	}
}
// System.Void SceneFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneFade_Update_m8388A92B3AFF11EF94A2D28A454C7D5592945100 (SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* __this, const RuntimeMethod* method) 
{
	{
		// if(isChanged)
		bool L_0 = __this->___isChanged_7;
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		// fadesTime += Time.deltaTime;
		float L_1 = __this->___fadesTime_6;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___fadesTime_6 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (fades > 0.0f && fadesTime >= 0.1f)
		float L_3 = __this->___fades_5;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		float L_4 = __this->___fadesTime_6;
		if ((!(((float)L_4) >= ((float)(0.100000001f)))))
		{
			goto IL_007a;
		}
	}
	{
		// fades -= 0.1f;
		float L_5 = __this->___fades_5;
		__this->___fades_5 = ((float)il2cpp_codegen_subtract(L_5, (0.100000001f)));
		// fade.color = new Color(255, 255, 255, fades);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___fade_4;
		float L_7 = __this->___fades_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (255.0f), (255.0f), (255.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
		// fadesTime = 0;
		__this->___fadesTime_6 = (0.0f);
		return;
	}

IL_007a:
	{
		// else if (fades <= 0.0f)
		float L_9 = __this->___fades_5;
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// isEnd = true;
		__this->___isEnd_8 = (bool)1;
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void SceneFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneFade__ctor_m70481F9B02B99ABCA1CC9C9863B0086004BF8817 (SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* __this, const RuntimeMethod* method) 
{
	{
		// float fades = 1.0f;
		__this->___fades_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_mFE87E2AA20B80CBECD7C02C3A6EF68661736A3F1 (String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(sceneName == "")
		String_t* L_0 = ___sceneName0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_3, NULL);
		return;
	}

IL_0020:
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_4 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_4, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TitleSceneController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleSceneController_Awake_m78CED589EA2AAC3766ACF5B155EFF9085DACF5AE (TitleSceneController_t985A0A65C469CB2E3AF9626DE53A0C5F393D96C2* __this, const RuntimeMethod* method) 
{
	{
		// Application.runInBackground = true;
		Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
		// }
		return;
	}
}
// System.Void TitleSceneController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleSceneController_Update_mE83FE9F09BD5FC1B3EAEA52061C7541AADAC5E72 (TitleSceneController_t985A0A65C469CB2E3AF9626DE53A0C5F393D96C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A9CBED6AC1CE0AB32622691D0E7450E60D65318);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Return) || Input.touchCount > 0)
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}

IL_0011:
	{
		// fade.isChanged = true;
		SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* L_2 = __this->___fade_4;
		NullCheck(L_2);
		L_2->___isChanged_7 = (bool)1;
	}

IL_001d:
	{
		// if (fade.isEnd)
		SceneFade_t533FB6FD64BC211A0FDEB53791CD57340A0F9E4D* L_3 = __this->___fade_4;
		NullCheck(L_3);
		bool L_4 = L_3->___isEnd_8;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// SceneLoader.LoadScene("ChatScene");
		SceneLoader_LoadScene_mFE87E2AA20B80CBECD7C02C3A6EF68661736A3F1(_stringLiteral3A9CBED6AC1CE0AB32622691D0E7450E60D65318, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void TitleSceneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleSceneController__ctor_m5114DEB6AAFF10BEB67348C77DBA0F2C5CAA1B45 (TitleSceneController_t985A0A65C469CB2E3AF9626DE53A0C5F393D96C2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TwinkleEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwinkleEffect_Awake_mEE5709B6148AD16040062B7F8370F4E7CD8DBF5F (TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textFade = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textFade_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textFade_5), (void*)L_0);
		// StartCoroutine(Twinkle());
		RuntimeObject* L_1;
		L_1 = TwinkleEffect_Twinkle_m24548E986395F0726B002AEC352101048F15BDD3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TwinkleEffect::Twinkle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwinkleEffect_Twinkle_m24548E986395F0726B002AEC352101048F15BDD3 (TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* L_0 = (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD*)il2cpp_codegen_object_new(U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTwinkleU3Ed__3__ctor_mCAF743DC468D5978DD16EC984A632C2CE7C33437(L_0, 0, NULL);
		U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TwinkleEffect::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwinkleEffect_Fade_mF968E3E2797FFC68F7D64E5487A58025659C8B0D (TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* __this, float ___start0, float ___end1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* L_0 = (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD*)il2cpp_codegen_object_new(U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeU3Ed__4__ctor_m8F9AF7ADE9E846C9E40FF615FDEFF8C25FA934FA(L_0, 0, NULL);
		U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* L_2 = L_1;
		float L_3 = ___start0;
		NullCheck(L_2);
		L_2->___start_3 = L_3;
		U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* L_4 = L_2;
		float L_5 = ___end1;
		NullCheck(L_4);
		L_4->___end_4 = L_5;
		return L_4;
	}
}
// System.Void TwinkleEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwinkleEffect__ctor_mC63D8F817F370700E0F17E0D368FC2974DBF0BF3 (TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TwinkleEffect/<Twinkle>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTwinkleU3Ed__3__ctor_mCAF743DC468D5978DD16EC984A632C2CE7C33437 (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TwinkleEffect/<Twinkle>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTwinkleU3Ed__3_System_IDisposable_Dispose_m8AA487F0DCB6DF3B5D4C31CB0B023B46C3B629F7 (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TwinkleEffect/<Twinkle>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTwinkleU3Ed__3_MoveNext_mD0ED18B9D77E99846C5FDB0E1019C0A9C79E420C (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0029:
	{
		// yield return StartCoroutine(Fade(1, 0));
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_3 = V_1;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = TwinkleEffect_Fade_mF968E3E2797FFC68F7D64E5487A58025659C8B0D(L_4, (1.0f), (0.0f), NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(Fade(0, 1));
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_7 = V_1;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = TwinkleEffect_Fade_mF968E3E2797FFC68F7D64E5487A58025659C8B0D(L_8, (0.0f), (1.0f), NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_0029;
	}
}
// System.Object TwinkleEffect/<Twinkle>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTwinkleU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2CE5236334D7AEF566C077AD2AAE8D4609BCC652 (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TwinkleEffect/<Twinkle>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTwinkleU3Ed__3_System_Collections_IEnumerator_Reset_m3394A3EAD3E47EB6B3FD7208164BF6A90016BB25 (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTwinkleU3Ed__3_System_Collections_IEnumerator_Reset_m3394A3EAD3E47EB6B3FD7208164BF6A90016BB25_RuntimeMethod_var)));
	}
}
// System.Object TwinkleEffect/<Twinkle>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTwinkleU3Ed__3_System_Collections_IEnumerator_get_Current_m172FEE8B65A2B40C4648867C2DB4B933A347FC9A (U3CTwinkleU3Ed__3_t0586C9079AE0C12FD655FD9E52BEF7AE37EF06BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TwinkleEffect/<Fade>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__4__ctor_m8F9AF7ADE9E846C9E40FF615FDEFF8C25FA934FA (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TwinkleEffect/<Fade>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__4_System_IDisposable_Dispose_mBAE52B3308710425747161EA77A123D9383EAC3E (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TwinkleEffect/<Fade>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__4_MoveNext_mE0014FEA620322CA732FDE6FB9C4D35BFF3895F2 (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float current = 0;
		__this->___U3CcurrentU3E5__2_5 = (0.0f);
		// float percent = 0;
		__this->___U3CpercentU3E5__3_6 = (0.0f);
		goto IL_00ab;
	}

IL_0039:
	{
		// current += Time.deltaTime;
		float L_4 = __this->___U3CcurrentU3E5__2_5;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CcurrentU3E5__2_5 = ((float)il2cpp_codegen_add(L_4, L_5));
		// percent = current / fadeTime;
		float L_6 = __this->___U3CcurrentU3E5__2_5;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___fadeTime_4;
		__this->___U3CpercentU3E5__3_6 = ((float)(L_6/L_8));
		// Color color = textFade.color;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_9 = V_1;
		NullCheck(L_9);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = L_9->___textFade_5;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		V_2 = L_11;
		// color.a = Mathf.Lerp(start, end, percent);
		float L_12 = __this->___start_3;
		float L_13 = __this->___end_4;
		float L_14 = __this->___U3CpercentU3E5__3_6;
		float L_15;
		L_15 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_12, L_13, L_14, NULL);
		(&V_2)->___a_3 = L_15;
		// textFade.color = color;
		TwinkleEffect_t53AD9E13DCB915AC6E35EBBC25348BFB24C846D0* L_16 = V_1;
		NullCheck(L_16);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = L_16->___textFade_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_2;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ab:
	{
		// while (percent < 1)
		float L_19 = __this->___U3CpercentU3E5__3_6;
		if ((((float)L_19) < ((float)(1.0f))))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TwinkleEffect/<Fade>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47B501E81F69903A3F0B0E5B0CA9CB2ADA8AF7F8 (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TwinkleEffect/<Fade>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__4_System_Collections_IEnumerator_Reset_m05677F3A88D5784B0D5EE3B428CCB26091E82012 (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__4_System_Collections_IEnumerator_Reset_m05677F3A88D5784B0D5EE3B428CCB26091E82012_RuntimeMethod_var)));
	}
}
// System.Object TwinkleEffect/<Fade>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__4_System_Collections_IEnumerator_get_Current_mDE5D618554789728BCCE4C9793AEBB501C63916D (U3CFadeU3Ed__4_tB387C77D01A839DA76F0781DE424BBDE850E87FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_WalkSpeed_m2DF1008F29A30B73ADD6B3357FCB37F42D60B347_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// return walkSpeed;
		float L_0 = __this->___walkSpeed_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_JumpPower_m1376D29F3D65E14BF1D1EBE92E873BAF90AFDF75_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// return jumpPower;
		float L_0 = __this->___jumpPower_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
