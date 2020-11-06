# `@reason-react-native/svg`

[![Build Status](https://github.com/reason-react-native/svg/workflows/Build/badge.svg)](https://github.com/reason-react-native/svg/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/svg.svg)](https://www.npmjs.com/@reason-react-native/svg)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reason-react-native.github.io/discord/)

[ReScript](https://rescript-lang.org) / [Reason](https://reasonml.github.io) bindings for
[`react-native-svg`](https://github.com/react-native-community/react-native-svg).

Exposed as `ReactNativeSvg` module.

`@reason-react-native/svg` X.y.\* means it's compatible with `react-native-svg`
X.y.\*

## Installation

When
[`react-native-svg`](https://github.com/react-native-community/react-native-svg)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/svg
# or
yarn add @reason-react-native/svg
```

`@reason-react-native/svg` should be added to `bs-dependencies` in your
`bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/svg"
  ],
  //...
}
```

## Usage

Supported :

- SvgXml
- SvgCss
- Svg
- Rect
- Circle
- Ellipse
- Line
- Polygon
- Polyline
- Path
- Text
- TextPath
- Tspan
- Use
- G
- Symbol
- Defs
- Image
- ClipPath
- LinearGradient
- Stop
- RadialGradient
- Mask
- Pattern
- Marker
- ForeignObject

See [definition](.src/ReactNativeSvg.re) for more details.

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
