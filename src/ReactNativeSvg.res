open ReactNative

type size = Style.size
type sizes = array<size>
type opacity = string
external opacity: float => opacity = "%identity"

type alignmentBaseline = [
  | #baseline
  | #"text-bottom"
  | #alphabetic
  | #ideographic
  | #middle
  | #central
  | #mathematical
  | #"text-top"
  | #bottom
  | #center
  | #top
  | #"text-before-edge"
  | #"text-after-edge"
  | #"before-edge"
  | #"after-edge"
  | #hanging
]
type baselineShift = [#sub | #super | #baseline]
type clipRule = [#evenodd | #nonzero]
type fillRule = [#evenodd | #nonzero]
type fontStretch = [
  | #normal
  | #wider
  | #narrower
  | #"ultra-condensed"
  | #"extra-condensed"
  | #condensed
  | #"semi-condensed"
  | #"semi-expanded"
  | #expanded
  | #"extra-expanded"
  | #"ultra-expanded"
]
type fontStyle = [#normal | #italic | #oblique]

type fontVariant = [#normal | #smallcaps]
type fontVariantLigatures = [#normal | #none]
type fontWeight = [
  | #normal
  | #bold
  | #bolder
  | #lighter
  | #100
  | #200
  | #300
  | #400
  | #500
  | #600
  | #700
  | #800
  | #900
]
type gradientUnits = [#userSpaceOnUse | #objectBoundingBox]
type lengthAdjust = [#spacing | #spacingAndGlyphs]
type markerUnits = [#userSpaceOnUse | #strokeWidth]
type maskContentUnits = [#userSpaceOnUse | #objectBoundingBox]
type maskUnits = [#userSpaceOnUse | #objectBoundingBox]
type method_ = [#align | #stretch]
type midLine = [#sharp | #smooth]
type patternContentUnits = [#userSpaceOnUse | #objectBoundingBox]
type patternUnits = [#userSpaceOnUse | #objectBoundingBox]
type spacing = [#auto | #exact]
type strokeLinecap = [#butt | #square | #round]
type strokeLinejoin = [#miter | #bevel | #round]
type textAnchor = [#start | #middle | #end]
type textDecoration = [
  | #none
  | #underline
  | #overline
  | #"line-through"
  | #blink
]
type vectorEffect = [
  | #none
  | #nonScalingStroke
  | #default
  | #inherit
  | #uri
]

// https://github.com/react-native-community/react-native-svg#use-with-xml-strings
module SvgXml = {
  @react.component @module("react-native-svg")
  external make: (
    ~xml: string,
    ~width: size=?,
    ~height: size=?,
    ~style: Style.t=?,
  ) => React.element = "SvgXml"
}

// https://github.com/react-native-community/react-native-svg#css-support
module SvgCss = {
  @react.component @module("react-native-svg")
  external make: (
    ~xml: string,
    ~width: size=?,
    ~height: size=?,
    ~style: Style.t=?,
  ) => React.element = "SvgCss"
}

// @todo?
// SvgFromXml
// SvgUri
// SvgFromUri
// SvgWithCss
// SvgCssUri
// SvgWithCssUri

type commonProps = {
  id?: string,
  fill?: Color.t,
  fillOpacity?: opacity,
  fillRule?: fillRule,
  stroke?: Color.t,
  strokeWidth?: size,
  strokeOpacity?: opacity,
  strokeDasharray?: array<size>,
  strokeDashoffset?: size,
  strokeLinecap?: strokeLinecap,
  strokeLinejoin?: strokeLinejoin,
  strokeMiterlimit?: size,
  clipRule?: clipRule,
  clipPath?: string,
  transform?: string,
  vectorEffect?: vectorEffect,
  x?: size,
  y?: size,
  rotation?: size,
  scale?: size,
  origin?: string,
  originX?: size,
  originY?: size,
}

type responderProps = {
  onPress?: Event.pressEvent => unit,
  onPressIn?: Event.pressEvent => unit,
  onPressOut?: Event.pressEvent => unit,
  onLongPress?: Event.pressEvent => unit,
  disabled?: bool,
  delayPressIn?: int,
  delayPressOut?: int,
  delayLongPress?: int,
}

type textProps = {
  alignmentBaseline?: alignmentBaseline,
  baselineShift?: baselineShift,
  verticalAlign?: size,
  lengthAdjust?: lengthAdjust,
  textLength?: string,
}

type fontProps = {
  fontStyle?: fontStyle,
  fontVariant?: fontVariant,
  fontWeight?: fontWeight,
  fontStretch?: fontStretch,
  fontSize?: size,
  fontFamily?: string,
  textAnchor?: textAnchor,
  textDecoration?: textDecoration,
  letterSpacing?: size,
  wordSpacing?: size,
  kerning?: size,
  fontFeatureSettings?: string,
  fontVariantLigatures?: fontVariantLigatures,
  fontVariationSettings?: string,
}

// https://github.com/react-native-community/react-native-svg#svg
module Svg = {
  type _props = {
    ...commonProps,
    ...responderProps,
    color?: Color.t,
    viewBox?: string,
    opacity?: opacity,
    onLayout?: unit => unit,
    preserveAspectRatio?: string,
    style?: Style.t,
    width?: size,
    height?: size,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Svg"
}

module Rect = {
  type _props = {
    ...commonProps,
    ...responderProps,
    width?: size,
    height?: size,
    rx?: size,
    ry?: size,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Rect"
}

module Circle = {
  type _props = {
    ...commonProps,
    ...responderProps,
    cx?: size,
    cy?: size,
    r?: size,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Circle"
}

module Ellipse = {
  type _props = {
    ...commonProps,
    ...responderProps,
    cx?: size,
    cy?: size,
    rx?: size,
    ry?: size,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Ellipse"
}

module Line = {
  type _props = {
    ...commonProps,
    ...responderProps,
    x1?: size,
    y1?: size,
    x2?: size,
    y2?: size,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Line"
}

module Polygon = {
  type _props = {
    ...commonProps,
    ...responderProps,
    points?: string,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Polygon"
}

module Polyline = {
  type _props = {
    ...commonProps,
    ...responderProps,
    points?: string,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Polyline"
}

module Path = {
  type _props = {
    ...commonProps,
    ...responderProps,
    d?: string,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Path"
}

module Text = {
  type _props = {
    ...commonProps,
    ...responderProps,
    ...textProps,
    ...fontProps,
    dx?: size,
    dy?: size,
    rotate?: size,
    inlineSize?: size,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Text"
}

module TextPath = {
  type _props = {
    ...commonProps,
    ...responderProps,
    ...textProps,
    ...fontProps,
    xlinkHref?: string,
    href?: string,
    startOffset?: size,
    method?: method_,
    spacing?: spacing,
    midLine?: midLine,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "TextPath"
}

module Tspan = {
  type _props = {
    ...commonProps,
    ...responderProps,
    ...fontProps,
    dx?: string,
    dy?: string,
    rotate?: string,
    inlineSize?: size,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "TSpan"
}

module Use = {
  type _props = {
    ...commonProps,
    ...responderProps,
    xlinkHref?: string,
    href?: string,
    width?: size,
    height?: size,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Use"
}

module G = {
  type _props = {
    ...commonProps,
    ...responderProps,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "G"
}

module Symbol = {
  @react.component @module("react-native-svg")
  external make: (
    ~id: string=?,
    ~viewBox: string=?,
    ~preserveAspectRatio: string=?,
    ~opacity: opacity=?,
  ) => React.element = "Symbol"
}

module Defs = {
  @react.component @module("react-native-svg")
  external make: (~children: React.element) => React.element = "Defs"
}

module Image = {
  type _props = {
    ...commonProps,
    ...responderProps,
    xlinkHref?: string,
    href?: string,
    width?: size,
    height?: size,
    preserveAspectRatio?: string,
    opacity?: opacity,
    children?: React.element,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Image"
}

module ClipPath = {
  @react.component @module("react-native-svg")
  external make: (~children: React.element=?, ~id: string) => React.element = "ClipPath"
}

module LinearGradient = {
  @react.component @module("react-native-svg")
  external make: (
    ~id: string=?,
    ~x1: size,
    ~x2: size,
    ~y1: size,
    ~y2: size,
    // https://github.com/react-native-svg/react-native-svg/blob/b2e2c355204ff4b10973d3afce1495f7e4167ff7/src/index.d.ts#L163
    ~children: // transform?: number[] | string | TransformProps;
    // ~gradientUnits: gradientUnits=?,
    // ~gradientTransform: (float, float, float, float, float, float)=?,
    React.element,
  ) => React.element = "LinearGradient"
}

module Stop = {
  @react.component @module("react-native-svg")
  external make: (
    ~offset: size=?,
    ~stopColor: Color.t=?,
    ~stopOpacity: opacity=?,
  ) => React.element = "Stop"
}

module RadialGradient = {
  @react.component @module("react-native-svg")
  external make: (
    ~id: string=?,
    ~fx: size=?,
    ~fy: size=?,
    ~rx: size=?,
    ~ry: size=?,
    ~cx: size=?,
    ~cy: size=?,
    ~r: size=?,
    ~gradientUnits: gradientUnits=?,
    ~gradientTransform: (float, float, float, float, float, float)=?,
    ~children: React.element,
  ) => React.element = "RadialGradient"
}

module Mask = {
  type _props = {
    ...commonProps,
    ...responderProps,
    width?: size,
    height?: size,
    maskTransform?: (float, float, float, float, float, float),
    maskUnits?: maskUnits,
    maskContentUnits?: maskContentUnits,
  }

  @react.component(: _props) @module("react-native-svg")
  external make: _ => React.element = "Mask"
}

module Pattern = {
  @react.component @module("react-native-svg")
  external make: (
    ~id: string=?,
    ~x: size=?,
    ~y: size=?,
    ~width: size=?,
    ~height: size=?,
    ~patternTransform: (float, float, float, float, float, float)=?,
    ~patternUnits: patternUnits=?,
    ~patternContentUnits: patternContentUnits=?,
    ~viewBox: string=?,
    ~preserveAspectRatio: string=?,
    ~children: React.element,
  ) => React.element = "Pattern"
}

module Marker = {
  @react.component @module("react-native-svg")
  external make: (
    ~id: string=?,
    ~viewBox: string=?,
    ~preserveAspectRatio: string=?,
    ~refX: size=?,
    ~refY: size=?,
    ~markerWidth: size=?,
    ~markerHeight: size=?,
    ~markerUnits: markerUnits=?,
    ~orient: string=?,
  ) => React.element = "Marker"
}

module ForeignObject = {
  @react.component @module("react-native-svg")
  external make: (~x: size=?, ~y: size=?, ~width: size=?, ~height: size=?) => React.element =
    "ForeignObject"
}
