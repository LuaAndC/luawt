
#ifndef ENUMS_HPP_
#define ENUMS_HPP_

#include "boost-xtime.hpp"

#include "Global.hpp"

static const char* const luawt_enum_WGLWidget_ClientSideRenderer_str[] = {
    "PAINT_GL",
    "RESIZE_GL",
    "UPDATE_GL",
    NULL
};

static const lint luawt_enum_WGLWidget_ClientSideRenderer_val[] = {
    1,
    2,
    4
};

static const char* const luawt_enum_WAbstractMedia_Options_str[] = {
    "Autoplay",
    "Loop",
    "Controls",
    NULL
};

static const lint luawt_enum_WAbstractMedia_Options_val[] = {
    1,
    2,
    4
};

static const char* const luawt_enum_DomElementType_str[] = {
    "DomElement_A",
    "DomElement_BR",
    "DomElement_BUTTON",
    "DomElement_COL",
    "DomElement_COLGROUP",
    "DomElement_DIV",
    "DomElement_FIELDSET",
    "DomElement_FORM",
    "DomElement_H1",
    "DomElement_H2",
    "DomElement_H3",
    "DomElement_H4",
    "DomElement_H5",
    "DomElement_H6",
    "DomElement_IFRAME",
    "DomElement_IMG",
    "DomElement_INPUT",
    "DomElement_LABEL",
    "DomElement_LEGEND",
    "DomElement_LI",
    "DomElement_OL",
    "DomElement_OPTION",
    "DomElement_UL",
    "DomElement_SCRIPT",
    "DomElement_SELECT",
    "DomElement_SPAN",
    "DomElement_TABLE",
    "DomElement_TBODY",
    "DomElement_THEAD",
    "DomElement_TFOOT",
    "DomElement_TH",
    "DomElement_TD",
    "DomElement_TEXTAREA",
    "DomElement_TR",
    "DomElement_P",
    "DomElement_CANVAS",
    "DomElement_MAP",
    "DomElement_AREA",
    "DomElement_OBJECT",
    "DomElement_PARAM",
    "DomElement_AUDIO",
    "DomElement_VIDEO",
    "DomElement_SOURCE",
    "DomElement_B",
    "DomElement_STRONG",
    "DomElement_EM",
    "DomElement_UNKNOWN",
    NULL
};

static const lint luawt_enum_DomElementType_val[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46
};

static const char* const luawt_enum_WGLWidget_GLenum_str[] = {
    "NONE",
    "NO_ERROR",
    "POINTS",
    "ZERO",
    "LINES",
    "ONE",
    "LINE_LOOP",
    "LINE_STRIP",
    "TRIANGLES",
    "TRIANGLE_STRIP",
    "TRIANGLE_FAN",
    "DEPTH_BUFFER_BIT",
    "NEVER",
    "LESS",
    "EQUAL",
    "LEQUAL",
    "GREATER",
    "NOTEQUAL",
    "GEQUAL",
    "ALWAYS",
    "SRC_COLOR",
    "ONE_MINUS_SRC_COLOR",
    "SRC_ALPHA",
    "ONE_MINUS_SRC_ALPHA",
    "DST_ALPHA",
    "ONE_MINUS_DST_ALPHA",
    "DST_COLOR",
    "ONE_MINUS_DST_COLOR",
    "SRC_ALPHA_SATURATE",
    "STENCIL_BUFFER_BIT",
    "FRONT",
    "BACK",
    "FRONT_AND_BACK",
    "INVALID_ENUM",
    "INVALID_VALUE",
    "INVALID_OPERATION",
    "OUT_OF_MEMORY",
    "INVALID_FRAMEBUFFER_OPERATION",
    "CW",
    "CCW",
    "LINE_WIDTH",
    "CULL_FACE",
    "CULL_FACE_MODE",
    "FRONT_FACE",
    "DEPTH_RANGE",
    "DEPTH_TEST",
    "DEPTH_WRITEMASK",
    "DEPTH_CLEAR_VALUE",
    "DEPTH_FUNC",
    "STENCIL_TEST",
    "STENCIL_CLEAR_VALUE",
    "STENCIL_FUNC",
    "STENCIL_VALUE_MASK",
    "STENCIL_FAIL",
    "STENCIL_PASS_DEPTH_FAIL",
    "STENCIL_PASS_DEPTH_PASS",
    "STENCIL_REF",
    "STENCIL_WRITEMASK",
    "VIEWPORT",
    "DITHER",
    "BLEND",
    "SCISSOR_BOX",
    "SCISSOR_TEST",
    "COLOR_CLEAR_VALUE",
    "COLOR_WRITEMASK",
    "UNPACK_ALIGNMENT",
    "PACK_ALIGNMENT",
    "MAX_TEXTURE_SIZE",
    "MAX_VIEWPORT_DIMS",
    "SUBPIXEL_BITS",
    "RED_BITS",
    "GREEN_BITS",
    "BLUE_BITS",
    "ALPHA_BITS",
    "DEPTH_BITS",
    "STENCIL_BITS",
    "TEXTURE_2D",
    "DONT_CARE",
    "FASTEST",
    "NICEST",
    "BYTE",
    "UNSIGNED_BYTE",
    "SHORT",
    "UNSIGNED_SHORT",
    "INT",
    "UNSIGNED_INT",
    "FLOAT",
    "INVERT",
    "TEXTURE",
    "STENCIL_INDEX",
    "DEPTH_COMPONENT",
    "ALPHA",
    "RGB",
    "RGBA",
    "LUMINANCE",
    "LUMINANCE_ALPHA",
    "KEEP",
    "REPLACE",
    "INCR",
    "DECR",
    "VENDOR",
    "RENDERER",
    "VERSION",
    "NEAREST",
    "LINEAR",
    "NEAREST_MIPMAP_NEAREST",
    "LINEAR_MIPMAP_NEAREST",
    "NEAREST_MIPMAP_LINEAR",
    "LINEAR_MIPMAP_LINEAR",
    "TEXTURE_MAG_FILTER",
    "TEXTURE_MIN_FILTER",
    "TEXTURE_WRAP_S",
    "TEXTURE_WRAP_T",
    "REPEAT",
    "POLYGON_OFFSET_UNITS",
    "COLOR_BUFFER_BIT",
    "CONSTANT_COLOR",
    "ONE_MINUS_CONSTANT_COLOR",
    "CONSTANT_ALPHA",
    "ONE_MINUS_CONSTANT_ALPHA",
    "BLEND_COLOR",
    "FUNC_ADD",
    "BLEND_EQUATION",
    "BLEND_EQUATION_RGB",
    "FUNC_SUBTRACT",
    "FUNC_REVERSE_SUBTRACT",
    "UNSIGNED_SHORT_4_4_4_4",
    "UNSIGNED_SHORT_5_5_5_1",
    "POLYGON_OFFSET_FILL",
    "POLYGON_OFFSET_FACTOR",
    "RGBA4",
    "RGB5_A1",
    "TEXTURE_BINDING_2D",
    "SAMPLE_ALPHA_TO_COVERAGE",
    "SAMPLE_COVERAGE",
    "SAMPLE_BUFFERS",
    "SAMPLES",
    "SAMPLE_COVERAGE_VALUE",
    "SAMPLE_COVERAGE_INVERT",
    "BLEND_DST_RGB",
    "BLEND_SRC_RGB",
    "BLEND_DST_ALPHA",
    "BLEND_SRC_ALPHA",
    "CLAMP_TO_EDGE",
    "GENERATE_MIPMAP_HINT",
    "DEPTH_COMPONENT16",
    "DEPTH_STENCIL_ATTACHMENT",
    "UNSIGNED_SHORT_5_6_5",
    "MIRRORED_REPEAT",
    "ALIASED_POINT_SIZE_RANGE",
    "ALIASED_LINE_WIDTH_RANGE",
    "TEXTURE0",
    "TEXTURE1",
    "TEXTURE2",
    "TEXTURE3",
    "TEXTURE4",
    "TEXTURE5",
    "TEXTURE6",
    "TEXTURE7",
    "TEXTURE8",
    "TEXTURE9",
    "TEXTURE10",
    "TEXTURE11",
    "TEXTURE12",
    "TEXTURE13",
    "TEXTURE14",
    "TEXTURE15",
    "TEXTURE16",
    "TEXTURE17",
    "TEXTURE18",
    "TEXTURE19",
    "TEXTURE20",
    "TEXTURE21",
    "TEXTURE22",
    "TEXTURE23",
    "TEXTURE24",
    "TEXTURE25",
    "TEXTURE26",
    "TEXTURE27",
    "TEXTURE28",
    "TEXTURE29",
    "TEXTURE30",
    "TEXTURE31",
    "ACTIVE_TEXTURE",
    "MAX_RENDERBUFFER_SIZE",
    "DEPTH_STENCIL",
    "INCR_WRAP",
    "DECR_WRAP",
    "TEXTURE_CUBE_MAP",
    "TEXTURE_BINDING_CUBE_MAP",
    "TEXTURE_CUBE_MAP_POSITIVE_X",
    "TEXTURE_CUBE_MAP_NEGATIVE_X",
    "TEXTURE_CUBE_MAP_POSITIVE_Y",
    "TEXTURE_CUBE_MAP_NEGATIVE_Y",
    "TEXTURE_CUBE_MAP_POSITIVE_Z",
    "TEXTURE_CUBE_MAP_NEGATIVE_Z",
    "MAX_CUBE_MAP_TEXTURE_SIZE",
    "VERTEX_ATTRIB_ARRAY_ENABLED",
    "VERTEX_ATTRIB_ARRAY_SIZE",
    "VERTEX_ATTRIB_ARRAY_STRIDE",
    "VERTEX_ATTRIB_ARRAY_TYPE",
    "CURRENT_VERTEX_ATTRIB",
    "VERTEX_ATTRIB_ARRAY_POINTER",
    "NUM_COMPRESSED_TEXTURE_FORMATS",
    "COMPRESSED_TEXTURE_FORMATS",
    "BUFFER_SIZE",
    "BUFFER_USAGE",
    "STENCIL_BACK_FUNC",
    "STENCIL_BACK_FAIL",
    "STENCIL_BACK_PASS_DEPTH_FAIL",
    "STENCIL_BACK_PASS_DEPTH_PASS",
    "BLEND_EQUATION_ALPHA",
    "MAX_VERTEX_ATTRIBS",
    "VERTEX_ATTRIB_ARRAY_NORMALIZED",
    "MAX_TEXTURE_IMAGE_UNITS",
    "ARRAY_BUFFER",
    "ELEMENT_ARRAY_BUFFER",
    "ARRAY_BUFFER_BINDING",
    "ELEMENT_ARRAY_BUFFER_BINDING",
    "VERTEX_ATTRIB_ARRAY_BUFFER_BINDING",
    "STREAM_DRAW",
    "STATIC_DRAW",
    "DYNAMIC_DRAW",
    "FRAGMENT_SHADER",
    "VERTEX_SHADER",
    "MAX_VERTEX_TEXTURE_IMAGE_UNITS",
    "MAX_COMBINED_TEXTURE_IMAGE_UNITS",
    "SHADER_TYPE",
    "FLOAT_VEC2",
    "FLOAT_VEC3",
    "FLOAT_VEC4",
    "INT_VEC2",
    "INT_VEC3",
    "INT_VEC4",
    "BOOL",
    "BOOL_VEC2",
    "BOOL_VEC3",
    "BOOL_VEC4",
    "FLOAT_MAT2",
    "FLOAT_MAT3",
    "FLOAT_MAT4",
    "SAMPLER_2D",
    "SAMPLER_CUBE",
    "DELETE_STATUS",
    "COMPILE_STATUS",
    "LINK_STATUS",
    "VALIDATE_STATUS",
    "INFO_LOG_LENGTH",
    "ATTACHED_SHADERS",
    "ACTIVE_UNIFORMS",
    "ACTIVE_UNIFORM_MAX_LENGTH",
    "SHADER_SOURCE_LENGTH",
    "ACTIVE_ATTRIBUTES",
    "ACTIVE_ATTRIBUTE_MAX_LENGTH",
    "SHADING_LANGUAGE_VERSION",
    "CURRENT_PROGRAM",
    "STENCIL_BACK_REF",
    "STENCIL_BACK_VALUE_MASK",
    "STENCIL_BACK_WRITEMASK",
    "FRAMEBUFFER_BINDING",
    "RENDERBUFFER_BINDING",
    "FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE",
    "FRAMEBUFFER_ATTACHMENT_OBJECT_NAME",
    "FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL",
    "FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE",
    "FRAMEBUFFER_COMPLETE",
    "FRAMEBUFFER_INCOMPLETE_ATTACHMENT",
    "FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT",
    "FRAMEBUFFER_INCOMPLETE_DIMENSIONS",
    "FRAMEBUFFER_UNSUPPORTED",
    "COLOR_ATTACHMENT0",
    "DEPTH_ATTACHMENT",
    "STENCIL_ATTACHMENT",
    "FRAMEBUFFER",
    "RENDERBUFFER",
    "RENDERBUFFER_WIDTH",
    "RENDERBUFFER_HEIGHT",
    "RENDERBUFFER_INTERNAL_FORMAT",
    "STENCIL_INDEX8",
    "RENDERBUFFER_RED_SIZE",
    "RENDERBUFFER_GREEN_SIZE",
    "RENDERBUFFER_BLUE_SIZE",
    "RENDERBUFFER_ALPHA_SIZE",
    "RENDERBUFFER_DEPTH_SIZE",
    "RENDERBUFFER_STENCIL_SIZE",
    "RGB565",
    "LOW_FLOAT",
    "MEDIUM_FLOAT",
    "HIGH_FLOAT",
    "LOW_INT",
    "MEDIUM_INT",
    "HIGH_INT",
    "MAX_VERTEX_UNIFORM_VECTORS",
    "MAX_VARYING_VECTORS",
    "MAX_FRAGMENT_UNIFORM_VECTORS",
    "UNPACK_FLIP_Y_WEBGL",
    "UNPACK_PREMULTIPLY_ALPHA_WEBGL",
    "CONTEXT_LOST_WEBGL",
    "UNPACK_COLORSPACE_CONVERSION_WEBGL",
    "BROWSER_DEFAULT_WEBGL",
    NULL
};

static const lint luawt_enum_WGLWidget_GLenum_val[] = {
    0,
    0,
    0,
    0,
    1,
    1,
    2,
    3,
    4,
    5,
    6,
    256,
    512,
    513,
    514,
    515,
    516,
    517,
    518,
    519,
    768,
    769,
    770,
    771,
    772,
    773,
    774,
    775,
    776,
    1024,
    1028,
    1029,
    1032,
    1280,
    1281,
    1282,
    1285,
    1286,
    2304,
    2305,
    2849,
    2884,
    2885,
    2886,
    2928,
    2929,
    2930,
    2931,
    2932,
    2960,
    2961,
    2962,
    2963,
    2964,
    2965,
    2966,
    2967,
    2968,
    2978,
    3024,
    3042,
    3088,
    3089,
    3106,
    3107,
    3317,
    3333,
    3379,
    3386,
    3408,
    3410,
    3411,
    3412,
    3413,
    3414,
    3415,
    3553,
    4352,
    4353,
    4354,
    5120,
    5121,
    5122,
    5123,
    5124,
    5125,
    5126,
    5386,
    5890,
    6401,
    6402,
    6406,
    6407,
    6408,
    6409,
    6410,
    7680,
    7681,
    7682,
    7683,
    7936,
    7937,
    7938,
    9728,
    9729,
    9984,
    9985,
    9986,
    9987,
    10240,
    10241,
    10242,
    10243,
    10497,
    10752,
    16384,
    32769,
    32770,
    32771,
    32772,
    32773,
    32774,
    32777,
    32777,
    32778,
    32779,
    32819,
    32820,
    32823,
    32824,
    32854,
    32855,
    32873,
    32926,
    32928,
    32936,
    32937,
    32938,
    32939,
    32968,
    32969,
    32970,
    32971,
    33071,
    33170,
    33189,
    33306,
    33635,
    33648,
    33901,
    33902,
    33984,
    33985,
    33986,
    33987,
    33988,
    33989,
    33990,
    33991,
    33992,
    33993,
    33994,
    33995,
    33996,
    33997,
    33998,
    33999,
    34000,
    34001,
    34002,
    34003,
    34004,
    34005,
    34006,
    34007,
    34008,
    34009,
    34010,
    34011,
    34012,
    34013,
    34014,
    34015,
    34016,
    34024,
    34041,
    34055,
    34056,
    34067,
    34068,
    34069,
    34070,
    34071,
    34072,
    34073,
    34074,
    34076,
    34338,
    34339,
    34340,
    34341,
    34342,
    34373,
    34466,
    34467,
    34660,
    34661,
    34816,
    34817,
    34818,
    34819,
    34877,
    34921,
    34922,
    34930,
    34962,
    34963,
    34964,
    34965,
    34975,
    35040,
    35044,
    35048,
    35632,
    35633,
    35660,
    35661,
    35663,
    35664,
    35665,
    35666,
    35667,
    35668,
    35669,
    35670,
    35671,
    35672,
    35673,
    35674,
    35675,
    35676,
    35678,
    35680,
    35712,
    35713,
    35714,
    35715,
    35716,
    35717,
    35718,
    35719,
    35720,
    35721,
    35722,
    35724,
    35725,
    36003,
    36004,
    36005,
    36006,
    36007,
    36048,
    36049,
    36050,
    36051,
    36053,
    36054,
    36055,
    36057,
    36061,
    36064,
    36096,
    36128,
    36160,
    36161,
    36162,
    36163,
    36164,
    36168,
    36176,
    36177,
    36178,
    36179,
    36180,
    36181,
    36194,
    36336,
    36337,
    36338,
    36339,
    36340,
    36341,
    36347,
    36348,
    36349,
    37440,
    37441,
    37442,
    37443,
    37444
};

static const char* const luawt_enum_SelectionBehavior_str[] = {
    "SelectItems",
    "SelectRows",
    NULL
};

static const lint luawt_enum_SelectionBehavior_val[] = {
    0,
    1
};

static const char* const luawt_enum_WMenuItem_LoadPolicy_str[] = {
    "LazyLoading",
    "PreLoading",
    NULL
};

static const lint luawt_enum_WMenuItem_LoadPolicy_val[] = {
    0,
    1
};

static const char* const luawt_enum_WMediaPlayer_MediaType_str[] = {
    "Audio",
    "Video",
    NULL
};

static const lint luawt_enum_WMediaPlayer_MediaType_val[] = {
    0,
    1
};

static const char* const luawt_enum_WApplication_AjaxMethod_str[] = {
    "XMLHttpRequest",
    "DynamicScriptTag",
    NULL
};

static const lint luawt_enum_WApplication_AjaxMethod_val[] = {
    0,
    1
};

static const char* const luawt_enum_Icon_str[] = {
    "NoIcon",
    "Information",
    "Warning",
    "Critical",
    "Question",
    NULL
};

static const lint luawt_enum_Icon_val[] = {
    0,
    1,
    2,
    3,
    4
};

static const char* const luawt_enum_WMediaPlayer_Encoding_str[] = {
    "PosterImage",
    "MP3",
    "M4A",
    "OGA",
    "WAV",
    "WEBMA",
    "FLA",
    "M4V",
    "OGV",
    "WEBMV",
    "FLV",
    NULL
};

static const lint luawt_enum_WMediaPlayer_Encoding_val[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10
};

static const char* const luawt_enum_WTreeNode_LoadPolicy_str[] = {
    "LazyLoading",
    "PreLoading",
    "NextLevelLoading",
    NULL
};

static const lint luawt_enum_WTreeNode_LoadPolicy_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_WCalendar_HorizontalHeaderFormat_str[] = {
    "SingleLetterDayNames",
    "ShortDayNames",
    "LongDayNames",
    NULL
};

static const lint luawt_enum_WCalendar_HorizontalHeaderFormat_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_WGoogleMap_MapTypeControl_str[] = {
    "NoControl",
    "DefaultControl",
    "MenuControl",
    "HierarchicalControl",
    "HorizontalBarControl",
    NULL
};

static const lint luawt_enum_WGoogleMap_MapTypeControl_val[] = {
    0,
    1,
    2,
    3,
    4
};

static const char* const luawt_enum_WGoogleMap_ApiVersion_str[] = {
    "Version2",
    "Version3",
    NULL
};

static const lint luawt_enum_WGoogleMap_ApiVersion_val[] = {
    0,
    1
};

static const char* const luawt_enum_WAbstractItemView_EditTrigger_str[] = {
    "NoEditTrigger",
    "SingleClicked",
    "DoubleClicked",
    "SelectedClicked",
    NULL
};

static const lint luawt_enum_WAbstractItemView_EditTrigger_val[] = {
    0,
    1,
    2,
    4
};

static const char* const luawt_enum_WMediaPlayer_TextId_str[] = {
    "CurrentTime",
    "Duration",
    "Title",
    NULL
};

static const lint luawt_enum_WMediaPlayer_TextId_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_WMediaPlayer_ButtonControlId_str[] = {
    "VideoPlay",
    "Play",
    "Pause",
    "Stop",
    "VolumeMute",
    "VolumeUnmute",
    "VolumeMax",
    "FullScreen",
    "RestoreScreen",
    "RepeatOn",
    "RepeatOff",
    NULL
};

static const lint luawt_enum_WMediaPlayer_ButtonControlId_val[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10
};

static const char* const luawt_enum_WSuggestionPopup_PopupTrigger_str[] = {
    "Editing",
    "DropDownIcon",
    NULL
};

static const lint luawt_enum_WSuggestionPopup_PopupTrigger_val[] = {
    1,
    2
};

static const char* const luawt_enum_WTreeNode_ChildCountPolicy_str[] = {
    "Disabled",
    "Enabled",
    "Lazy",
    NULL
};

static const lint luawt_enum_WTreeNode_ChildCountPolicy_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_PositionScheme_str[] = {
    "Static",
    "Relative",
    "Absolute",
    "Fixed",
    NULL
};

static const lint luawt_enum_PositionScheme_val[] = {
    0,
    1,
    2,
    3
};

static const char* const luawt_enum_SelectionMode_str[] = {
    "NoSelection",
    "SingleSelection",
    "ExtendedSelection",
    NULL
};

static const lint luawt_enum_SelectionMode_val[] = {
    0,
    1,
    3
};

static const char* const luawt_enum_Orientation_str[] = {
    "Horizontal",
    "Vertical",
    NULL
};

static const lint luawt_enum_Orientation_val[] = {
    1,
    2
};

static const char* const luawt_enum_RenderFlag_str[] = {
    "RenderFull",
    "RenderUpdate",
    NULL
};

static const lint luawt_enum_RenderFlag_val[] = {
    1,
    2
};

static const char* const luawt_enum_AnchorTarget_str[] = {
    "TargetSelf",
    "TargetThisWindow",
    "TargetNewWindow",
    NULL
};

static const lint luawt_enum_AnchorTarget_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_AlignmentFlag_str[] = {
    "AlignLeft",
    "AlignRight",
    "AlignCenter",
    "AlignJustify",
    "AlignBaseline",
    "AlignSub",
    "AlignSuper",
    "AlignTop",
    "AlignTextTop",
    "AlignMiddle",
    "AlignBottom",
    "AlignTextBottom",
    NULL
};

static const lint luawt_enum_AlignmentFlag_val[] = {
    1,
    2,
    4,
    8,
    16,
    32,
    64,
    128,
    256,
    512,
    1024,
    2048
};

static const char* const luawt_enum_WMediaPlayer_ReadyState_str[] = {
    "HaveNothing",
    "HaveMetaData",
    "HaveCurrentData",
    "HaveFutureData",
    "HaveEnoughData",
    NULL
};

static const lint luawt_enum_WMediaPlayer_ReadyState_val[] = {
    0,
    1,
    2,
    3,
    4
};

static const char* const luawt_enum_WScrollArea_ScrollBarPolicy_str[] = {
    "ScrollBarAsNeeded",
    "ScrollBarAlwaysOff",
    "ScrollBarAlwaysOn",
    NULL
};

static const lint luawt_enum_WScrollArea_ScrollBarPolicy_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_TextFormat_str[] = {
    "XHTMLText",
    "XHTMLUnsafeText",
    "PlainText",
    NULL
};

static const lint luawt_enum_TextFormat_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_WTabWidget_LoadPolicy_str[] = {
    "LazyLoading",
    "PreLoading",
    NULL
};

static const lint luawt_enum_WTabWidget_LoadPolicy_val[] = {
    0,
    1
};

static const char* const luawt_enum_StandardButton_str[] = {
    "NoButton",
    "Ok",
    "Cancel",
    "Yes",
    "No",
    "Abort",
    "Retry",
    "Ignore",
    "YesAll",
    "NoAll",
    NULL
};

static const lint luawt_enum_StandardButton_val[] = {
    0,
    1,
    2,
    4,
    8,
    16,
    32,
    64,
    128,
    256
};

static const char* const luawt_enum_CheckState_str[] = {
    "Unchecked",
    "PartiallyChecked",
    "Checked",
    NULL
};

static const lint luawt_enum_CheckState_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_Side_str[] = {
    "Top",
    "Bottom",
    "Left",
    "Right",
    "CenterX",
    "CenterY",
    NULL
};

static const lint luawt_enum_Side_val[] = {
    1,
    2,
    4,
    8,
    16,
    32
};

static const char* const luawt_enum_WMediaPlayer_BarControlId_str[] = {
    "Time",
    "Volume",
    NULL
};

static const lint luawt_enum_WMediaPlayer_BarControlId_val[] = {
    0,
    1
};

static const char* const luawt_enum_PaintFlag_str[] = {
    "PaintUpdate",
    NULL
};

static const lint luawt_enum_PaintFlag_val[] = {
    1
};

static const char* const luawt_enum_WPaintedWidget_Method_str[] = {
    "InlineSvgVml",
    "HtmlCanvas",
    "PngImage",
    NULL
};

static const lint luawt_enum_WPaintedWidget_Method_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_SortOrder_str[] = {
    "AscendingOrder",
    "DescendingOrder",
    NULL
};

static const lint luawt_enum_SortOrder_val[] = {
    0,
    1
};

static const char* const luawt_enum_WValidator_State_str[] = {
    "Invalid",
    "InvalidEmpty",
    "Valid",
    NULL
};

static const lint luawt_enum_WValidator_State_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_WContainerWidget_Overflow_str[] = {
    "OverflowVisible",
    "OverflowAuto",
    "OverflowHidden",
    "OverflowScroll",
    NULL
};

static const lint luawt_enum_WContainerWidget_Overflow_val[] = {
    0,
    1,
    2,
    3
};

static const char* const luawt_enum_WLineEdit_EchoMode_str[] = {
    "Normal",
    "Password",
    NULL
};

static const lint luawt_enum_WLineEdit_EchoMode_val[] = {
    0,
    1
};

static const char* const luawt_enum_WDialog_DialogCode_str[] = {
    "Rejected",
    "Accepted",
    NULL
};

static const lint luawt_enum_WDialog_DialogCode_val[] = {
    0,
    1
};

static const char* const luawt_enum_WAbstractItemView_EditOption_str[] = {
    "SingleEditor",
    "MultipleEditors",
    "SaveWhenClosed",
    "LeaveEditorsOpen",
    NULL
};

static const lint luawt_enum_WAbstractItemView_EditOption_val[] = {
    1,
    2,
    4,
    8
};

static const char* const luawt_enum_WAbstractMedia_PreloadMode_str[] = {
    "PreloadNone",
    "PreloadAuto",
    "PreloadMetadata",
    NULL
};

static const lint luawt_enum_WAbstractMedia_PreloadMode_val[] = {
    0,
    1,
    2
};

static const char* const luawt_enum_WSlider_TickPosition_str[] = {
    "TicksAbove",
    "TicksLeft",
    "TicksBelow",
    "TicksRight",
    NULL
};

static const lint luawt_enum_WSlider_TickPosition_val[] = {
    1,
    1,
    2,
    2
};

static const char* const luawt_enum_MatchFlag_str[] = {
    "MatchExactly",
    "MatchStringExactly",
    "MatchStartsWith",
    "MatchEndsWith",
    "MatchRegExp",
    "MatchWildCard",
    "MatchCaseSensitive",
    "MatchWrap",
    NULL
};

static const lint luawt_enum_MatchFlag_val[] = {
    0,
    1,
    2,
    3,
    4,
    5,
    16,
    32
};

static const char* const luawt_enum_LayoutDirection_str[] = {
    "LeftToRight",
    "RightToLeft",
    NULL
};

static const lint luawt_enum_LayoutDirection_val[] = {
    0,
    1
};

static const char* const luawt_enum_WAbstractMedia_ReadyState_str[] = {
    "HaveNothing",
    "HaveMetaData",
    "HaveCurrentData",
    "HaveFutureData",
    "HaveEnoughData",
    NULL
};

static const lint luawt_enum_WAbstractMedia_ReadyState_val[] = {
    0,
    1,
    2,
    3,
    4
};

static const char* const luawt_enum_MetaHeaderType_str[] = {
    "MetaName",
    "MetaProperty",
    "MetaHttpHeader",
    NULL
};

static const lint luawt_enum_MetaHeaderType_val[] = {
    0,
    1,
    2
};

static const char* const luawt_SpecialEnums_arr[] = {
    "WGLWidget::ClientSideRenderer",
    "WAbstractMedia::Options",
    "WTreeNode::LoadPolicy",
    "WCalendar::HorizontalHeaderFormat",
    "WAbstractItemView::EditTrigger",
    "WMediaPlayer::TextId",
    "WSuggestionPopup::PopupTrigger",
    "WTreeNode::ChildCountPolicy",
    "Orientation",
    "RenderFlag",
    "AnchorTarget",
    "AlignmentFlag",
    "WScrollArea::ScrollBarPolicy",
    "TextFormat",
    "StandardButton",
    "CheckState",
    "Side",
    "WPaintedWidget::Method",
    "WValidator::State",
    "WAbstractItemView::EditOption",
    "WAbstractMedia::PreloadMode",
    "MetaHeaderType",

    NULL
};

#endif
