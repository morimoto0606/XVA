// �ȉ��� ifdef �u���b�N�� DLL ����̃G�N�X�|�[�g��e�Ղɂ���}�N�����쐬���邽�߂� 
// ��ʓI�ȕ��@�ł��B���� DLL ���̂��ׂẴt�@�C���́A�R�}���h ���C���Œ�`���ꂽ XVA_EXPORTS
// �V���{�����g�p���ăR���p�C������܂��B���̃V���{���́A���� DLL ���g�p����v���W�F�N�g�ł͒�`�ł��܂���B
// �\�[�X�t�@�C�������̃t�@�C�����܂�ł��鑼�̃v���W�F�N�g�́A 
// XVA_API �֐��� DLL ����C���|�[�g���ꂽ�ƌ��Ȃ��̂ɑ΂��A���� DLL �́A���̃}�N���Œ�`���ꂽ
// �V���{�����G�N�X�|�[�g���ꂽ�ƌ��Ȃ��܂��B
#ifdef XVA_EXPORTS
#define XVA_API __declspec(dllexport)
#else
#define XVA_API __declspec(dllimport)
#endif

// ���̃N���X�� XVA.dll ����G�N�X�|�[�g����܂����B
class XVA_API CXVA {
public:
	CXVA(void);
	// TODO: ���\�b�h�������ɒǉ����Ă��������B
};

extern XVA_API int nXVA;

XVA_API int fnXVA(void);
