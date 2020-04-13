open ReactNative;
open ReactNative.Style;
type sizes = array(size);
type opacity = string;
external opacity: float => size = "%identity";

// https://github.com/react-native-community/react-native-svg#use-with-xml-strings
module SvgXml = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (~xml: string, ~width: size=?, ~height: size=?, ~style: t=?) =>
    React.element =
    "SvgXml";
};

// https://github.com/react-native-community/react-native-svg#css-support
module SvgCss = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (~xml: string, ~width: size=?, ~height: size=?, ~style: t=?) =>
    React.element =
    "SvgCss";
};

// @todo?
// SvgFromXml
// SvgUri
// SvgFromUri
// SvgWithCss
// SvgCssUri
// SvgWithCssUri

// https://github.com/react-native-community/react-native-svg#svg
module Svg = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~color: Color.t=?,
      ~viewBox: string=?,
      ~opacity: size=?,
      ~onLayout: unit => unit=?,
      ~preserveAspectRatio: string=?,
      ~style: t=?,
      ~width: size=?,
      ~height: size=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Svg";
};

module Rect = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~width: size=?,
      ~height: size=?,
      ~rx: size=?,
      ~ry: size=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Rect";
};

module Circle = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~cx: size=?,
      ~cy: size=?,
      ~r: size=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Circle";
};

module Ellipse = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~cx: size=?,
      ~cy: size=?,
      ~rx: size=?,
      ~ry: size=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Ellipse";
};

module Line = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~x1: size=?,
      ~y1: size=?,
      ~x2: size=?,
      ~y2: size=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Line";
};

module Polygon = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~points: string=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Polygon";
};

module Polyline = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~points: string=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Polyline";
};

module Path = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~d: string=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Path";
};

module Text = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~dx: size=?,
      ~dy: size=?,
      ~rotate: size=?,
      ~inlineSize: size=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Text props
      ~alignmentBaseline: [@bs.string] [
                            | `baseline
                            | [@bs.as "text-bottom"] `textBottom
                            | `alphabetic
                            | `ideographic
                            | `middle
                            | `central
                            | `mathematical
                            | [@bs.as "text-top"] `textTop
                            | `bottom
                            | `center
                            | `top
                            | [@bs.as "text-before-edge"] `textBeforeEdge
                            | [@bs.as "text-after-edge"] `textAfterEdge
                            | [@bs.as "before-edge"] `beforeEdge
                            | [@bs.as "after-edge"] `afterEdge
                            | `hanging
                          ]
                            =?,
      ~baselineShift: [@bs.string] [ | `sub | `super | `baseline]=?,
      ~verticalAlign: size=?,
      ~lengthAdjust: [@bs.string] [ | `spacing | `spacingAndGlyphs]=?,
      ~textLength: string=?,
      // ~fontData: todo=?,
      ~fontFeatureSettings: string=?,
      // Font Props
      ~fontStyle: [@bs.string] [ | `normal | `italic | `oblique]=?,
      ~fontVariant: [@bs.string] [ | `normal | `smallcaps]=?,
      ~fontWeight: [@bs.string] [
                     | `normal
                     | `bold
                     | `bolder
                     | `lighter
                     | [@bs.as "100"] `_100
                     | [@bs.as "200"] `_200
                     | [@bs.as "300"] `_300
                     | [@bs.as "400"] `_400
                     | [@bs.as "500"] `_500
                     | [@bs.as "600"] `_600
                     | [@bs.as "700"] `_700
                     | [@bs.as "800"] `_800
                     | [@bs.as "900"] `_900
                   ]
                     =?,
      ~fontStretch: [@bs.string] [
                      | `normal
                      | `wider
                      | `narrower
                      | [@bs.as "ultra-condensed"] `ultraCondensed
                      | [@bs.as "extra-condensed"] `extraCondensed
                      | `condensed
                      | [@bs.as "semi-condensed"] `semiCondensed
                      | [@bs.as "semi-expanded"] `semiExpanded
                      | `expanded
                      | [@bs.as "extra-expanded"] `extraExpanded
                      | [@bs.as "ultra-expanded"] `ultraExpanded
                    ]
                      =?,
      ~fontSize: size=?,
      ~fontFamily: string=?,
      ~textAnchor: [@bs.string] [ | `start | `middle | [@bs.as "end"] `_end]=?,
      ~textDecoration: [@bs.string] [
                         | `none
                         | `underline
                         | `overline
                         | [@bs.as "line-through"] `lineThrough
                         | `blink
                       ]
                         =?,
      ~letterSpacing: size=?,
      ~wordSpacing: size=?,
      ~kerning: size=?,
      ~fontFeatureSettings: string=?,
      ~fontVariantLigatures: [@bs.string] [ | `normal | `none]=?,
      ~fontVariationSettings: string=?,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Text";
};

module TextPath = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~xlinkHref: string=?,
      ~href: string=?,
      ~startOffset: size=?,
      ~method: [@bs.string] [ | `align | `stretch]=?,
      ~spacing: [@bs.string] [ | `auto | `exact]=?,
      ~midLine: [@bs.string] [ | `sharp | `smooth]=?,
      ~children: React.element,
      // Text props
      ~alignmentBaseline: [@bs.string] [
                            | `baseline
                            | [@bs.as "text-bottom"] `textBottom
                            | `alphabetic
                            | `ideographic
                            | `middle
                            | `central
                            | `mathematical
                            | [@bs.as "text-top"] `textTop
                            | `bottom
                            | `center
                            | `top
                            | [@bs.as "text-before-edge"] `textBeforeEdge
                            | [@bs.as "text-after-edge"] `textAfterEdge
                            | [@bs.as "before-edge"] `beforeEdge
                            | [@bs.as "after-edge"] `afterEdge
                            | `hanging
                          ]
                            =?,
      ~baselineShift: [@bs.string] [ | `sub | `super | `baseline]=?,
      ~verticalAlign: size=?,
      ~lengthAdjust: [@bs.string] [ | `spacing | `spacingAndGlyphs]=?,
      ~textLength: string=?,
      // ~fontData: todo=?,
      ~fontFeatureSettings: string=?,
      // Font Props
      ~fontStyle: [@bs.string] [ | `normal | `italic | `oblique]=?,
      ~fontVariant: [@bs.string] [ | `normal | `smallcaps]=?,
      ~fontWeight: [@bs.string] [
                     | `normal
                     | `bold
                     | `bolder
                     | `lighter
                     | [@bs.as "100"] `_100
                     | [@bs.as "200"] `_200
                     | [@bs.as "300"] `_300
                     | [@bs.as "400"] `_400
                     | [@bs.as "500"] `_500
                     | [@bs.as "600"] `_600
                     | [@bs.as "700"] `_700
                     | [@bs.as "800"] `_800
                     | [@bs.as "900"] `_900
                   ]
                     =?,
      ~fontStretch: [@bs.string] [
                      | `normal
                      | `wider
                      | `narrower
                      | [@bs.as "ultra-condensed"] `ultraCondensed
                      | [@bs.as "extra-condensed"] `extraCondensed
                      | `condensed
                      | [@bs.as "semi-condensed"] `semiCondensed
                      | [@bs.as "semi-expanded"] `semiExpanded
                      | `expanded
                      | [@bs.as "extra-expanded"] `extraExpanded
                      | [@bs.as "ultra-expanded"] `ultraExpanded
                    ]
                      =?,
      ~fontSize: size=?,
      ~fontFamily: string=?,
      ~textAnchor: [@bs.string] [ | `start | `middle | [@bs.as "end"] `_end]=?,
      ~textDecoration: [@bs.string] [
                         | `none
                         | `underline
                         | `overline
                         | [@bs.as "line-through"] `lineThrough
                         | `blink
                       ]
                         =?,
      ~letterSpacing: size=?,
      ~wordSpacing: size=?,
      ~kerning: size=?,
      ~fontFeatureSettings: string=?,
      ~fontVariantLigatures: [@bs.string] [ | `normal | `none]=?,
      ~fontVariationSettings: string=?,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "TextPath";
};

module Tspan = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~dx: string=?,
      ~dy: string=?,
      ~rotate: string=?,
      ~inlineSize: size=?,
      ~children: React.element,
      // Font Props
      ~fontStyle: [@bs.string] [ | `normal | `italic | `oblique]=?,
      ~fontVariant: [@bs.string] [ | `normal | `smallcaps]=?,
      ~fontWeight: [@bs.string] [
                     | `normal
                     | `bold
                     | `bolder
                     | `lighter
                     | [@bs.as "100"] `_100
                     | [@bs.as "200"] `_200
                     | [@bs.as "300"] `_300
                     | [@bs.as "400"] `_400
                     | [@bs.as "500"] `_500
                     | [@bs.as "600"] `_600
                     | [@bs.as "700"] `_700
                     | [@bs.as "800"] `_800
                     | [@bs.as "900"] `_900
                   ]
                     =?,
      ~fontStretch: [@bs.string] [
                      | `normal
                      | `wider
                      | `narrower
                      | [@bs.as "ultra-condensed"] `ultraCondensed
                      | [@bs.as "extra-condensed"] `extraCondensed
                      | `condensed
                      | [@bs.as "semi-condensed"] `semiCondensed
                      | [@bs.as "semi-expanded"] `semiExpanded
                      | `expanded
                      | [@bs.as "extra-expanded"] `extraExpanded
                      | [@bs.as "ultra-expanded"] `ultraExpanded
                    ]
                      =?,
      ~fontSize: size=?,
      ~fontFamily: string=?,
      ~textAnchor: [@bs.string] [ | `start | `middle | [@bs.as "end"] `_end]=?,
      ~textDecoration: [@bs.string] [
                         | `none
                         | `underline
                         | `overline
                         | [@bs.as "line-through"] `lineThrough
                         | `blink
                       ]
                         =?,
      ~letterSpacing: size=?,
      ~wordSpacing: size=?,
      ~kerning: size=?,
      ~fontFeatureSettings: string=?,
      ~fontVariantLigatures: [@bs.string] [ | `normal | `none]=?,
      ~fontVariationSettings: string=?,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "TSpan";
};

module Use = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~xlinkHref: string=?,
      ~href: string=?,
      ~width: size=?,
      ~height: size=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Use";
};

module G = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "G";
};

module Symbol = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~id: string=?,
      ~viewBox: string=?,
      ~preserveAspectRatio: string=?,
      ~opacity: opacity=?
    ) =>
    React.element =
    "Symbol";
};

module Defs = {
  [@react.component] [@bs.module "react-native-svg"]
  external make: (~children: React.element) => React.element = "Defs";
};

module Image = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~xlinkHref: string=?,
      ~href: string=?,
      ~width: size=?,
      ~height: size=?,
      ~preserveAspectRatio: string=?,
      ~opacity: opacity=?,
      ~children: React.element,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Image";
};

module ClipPath = {
  [@react.component] [@bs.module "react-native-svg"]
  external make: (~id: string) => React.element = "ClipPath";
};

module LinearGradient = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~id: string=?,
      ~x1: size,
      ~x2: size,
      ~y1: size,
      ~y2: size,
      ~children: React.element
    ) =>
    React.element =
    "LinearGradient";
};

module Stop = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (~offset: size, ~stopColor: Color.t, ~stopOpacity: opacity) =>
    React.element =
    "Stop";
};

module RadialGradient = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~id: string=?,
      ~fx: size=?,
      ~fy: size=?,
      ~rx: size=?,
      ~ry: size=?,
      ~cx: size=?,
      ~cy: size=?,
      ~r: size=?,
      ~gradientUnits: [@bs.string] [ | `userSpaceOnUse | `objectBoundingBox]=?,
      ~gradientTransform: (float, float, float, float, float, float)=?
    ) =>
    React.element =
    "RadialGradient";
};

module Mask = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~width: size=?,
      ~height: size=?,
      ~maskTransform: (float, float, float, float, float, float)=?,
      ~maskUnits: [@bs.string] [ | `userSpaceOnUse | `objectBoundingBox]=?,
      ~maskContentUnits: [@bs.string] [ | `userSpaceOnUse | `objectBoundingBox]
                           =?,
      // Commons Props
      ~id: string=?,
      ~fill: Color.t=?,
      ~fillOpacity: opacity=?,
      ~fillRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~stroke: Color.t=?,
      ~strokeWidth: size=?,
      ~strokeOpacity: size=?,
      ~strokeDasharray: array(size)=?,
      ~strokeDashoffset: size=?,
      ~strokeLinecap: [@bs.string] [ | `butt | `square | `round]=?,
      ~strokeLinejoin: [@bs.string] [ | `miter | `bevel | `round]=?,
      ~strokeMiterlimit: size=?,
      ~clipRule: [@bs.string] [ | `evenodd | `nonzero]=?,
      ~clipPath: string=?,
      ~transform: string=?,
      ~vectorEffect: [@bs.string] [
                       | `none
                       | [@bs.as "non-scaling-stroke"] `nonScalingStroke
                       | `nonScalingStroke
                       | `default
                       | [@bs.as "inherit"] `_inherit
                       | `uri
                     ]
                       =?,
      ~x: size=?,
      ~y: size=?,
      ~rotation: size=?,
      ~scale: size=?,
      ~origin: string=?,
      ~originX: size=?,
      ~originY: size=?
    ) =>
    React.element =
    "Mask";
};

module Pattern = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~id: string=?,
      ~x: size=?,
      ~y: size=?,
      ~width: size=?,
      ~height: size=?,
      ~patternTransform: (float, float, float, float, float, float)=?,
      ~patternUnits: [@bs.string] [ | `userSpaceOnUse | `objectBoundingBox]=?,
      ~patternContentUnits: [@bs.string] [
                              | `userSpaceOnUse
                              | `objectBoundingBox
                            ]
                              =?,
      ~viewBox: string=?,
      ~preserveAspectRatio: string=?
    ) =>
    React.element =
    "Pattern";
};

module Marker = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (
      ~id: string=?,
      ~viewBox: string=?,
      ~preserveAspectRatio: string=?,
      ~refX: size=?,
      ~refY: size=?,
      ~markerWidth: size=?,
      ~markerHeight: size=?,
      ~markerUnits: [@bs.string] [ | `userSpaceOnUse | `strokeWidth]=?,
      ~orient: string=?
    ) =>
    React.element =
    "Marker";
};

module ForeignObject = {
  [@react.component] [@bs.module "react-native-svg"]
  external make:
    (~x: size=?, ~y: size=?, ~width: size=?, ~height: size=?) => React.element =
    "ForeignObject";
};
